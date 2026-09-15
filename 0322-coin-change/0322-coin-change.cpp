class Solution {
public:

    int count(vector<int>& coins, int n,int s){
        if (s==0)
            return 0;
        if (s<0)
            return 1e9;
        if (n==0 && s > 0)
            return 1e9;
        
        int opt1 = count(coins,n-1,s);//not pick
        int opt2 = 1+count(coins,n,s-coins[n-1]);
        return min(opt1,opt2);
    }
    int solveMem(vector<int>& coins,int amount, vector<vector<int>>&dp,int n) {
        if (amount == 0)
        {
            return 0;
        }
        if (amount < 0)
        {
            return 1e9;
        }
        if (n == 0 && amount > 0)
        {
            return 1e9;
        }
        if(dp[n][amount] != -1)
        {
            return dp[n][amount];
        }
        int opt1 = solveMem(coins, amount, dp, n-1);
        int opt2 = 1+solveMem(coins, amount-coins[n-1], dp, n);
        dp[n][amount] = min(opt1,opt2);
        return dp[n][amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        if (n == 0)
            return -1;
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        //int ans = count(coins, n, amount);
        int ans = solveMem(coins, amount, dp, n);
        return ans >= 1e9 ? -1 : ans;
    }
};