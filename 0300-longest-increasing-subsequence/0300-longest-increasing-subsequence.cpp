class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //return solve(nums,-1,0);
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(nums,-1,0,dp);
    }
    // recursion -> pick & not pick
    int solve(vector<int>& nums, int prev, int curr,vector<vector<int>>& dp)
    {
        int n = nums.size();
        if (curr >= n)
        {
            return 0;
        }
        if(dp[curr][prev+1]!=-1)
        {
            return dp[curr][prev+1];
        }
        int pick = 0, notpick = 0;
        if ( prev == -1 || nums[curr] > nums[prev])
        {
            pick = 1+solve(nums, curr, curr+1, dp);
        }
         notpick = solve(nums, prev, curr+1, dp);

        dp[curr][prev+1] = max(pick, notpick);
        return dp[curr][prev+1];
    }
};