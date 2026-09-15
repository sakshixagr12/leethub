class Solution {
public:

    int solve(int s, vector<int>& coins, vector<vector<int>>& dp, int n) {
        if (s == 0)
        {
            return 1;
        }
        if (s < 0)
        {
            return 0;
        }
        if ( n == 0 && s>0 )
        {
            return 0;
        }
        if (dp[n][s] != -1)
        {
            return dp[n][s];
        }
        int exclude = solve (s, coins, dp, n-1);
        //unbounded recursion,hence, can take infinite numbers of coins without changing the size of n
        int include = solve (s-coins[n-1], coins, dp, n); 
        

        dp[n][s] = include+exclude;
        return dp[n][s];
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp( n + 1, vector<int>(amount + 1, -1));
        return solve(amount, coins, dp, n);
    }
};