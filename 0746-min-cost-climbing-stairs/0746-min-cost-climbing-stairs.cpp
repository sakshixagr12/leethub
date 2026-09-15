class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < n; i++)
        {
            int opt1 = dp[i-2];
            int opt2 = dp[i-1];
            dp[i] = min(opt1,opt2)+cost[i];
        }
        dp[n]=min(dp[n-1],dp[n-2]);
        return dp[n];
    }
};