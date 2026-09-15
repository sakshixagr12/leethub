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
    int solve_tab(vector<int>& coins, int& sum) {

        int n = coins.size();
        vector<vector<unsigned int>>dp(n+1,vector<unsigned int>(sum+1,0));

        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 1; // if sum is zero, then answer is already 1
        }

        for(int i = 1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++) {

                // if current coin is greater than the required sum
                if (coins[i-1] > j) 
                {
                    //need to exclude this
                    dp[i][j] = dp[i-1][j];
                }
                else{
                // including/rep.
                unsigned int include = dp[i][j-coins[i-1]];
                    //exclude
                unsigned int exclude = dp[i-1][j];
                    // possible ways till dp[i][j]
                dp[i][j] = include+exclude;
                }
            }
        }
        return dp[n][sum];
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp( n + 1, vector<int>(amount + 1, -1));
       // return solve(amount, coins, dp, n);
       return (int)solve_tab(coins,amount);
    }
};