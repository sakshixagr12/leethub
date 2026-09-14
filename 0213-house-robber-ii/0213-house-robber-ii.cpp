class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1)
        {
            return nums[0];
        }
        vector<int> dp1(n,-1);
        int ans1 = solve(nums,dp1,0,n-2);
        vector<int> dp2(n,-1);
        int ans2 = solve(nums,dp2,1,n-1);
        return max(ans1,ans2);
    }
    int solve(vector<int>&nums, vector<int>& dp, int i,int end)
    {
        if (i > end)
        {
            return 0;
        }
        if(dp[i]!= -1)
        {
            return dp[i];
        }
       // bool first = false;
       // bool last = false;
        int opt1=nums[i]+solve(nums,dp,i+2,end);
        int opt2=solve(nums,dp,i+1,end);
        dp[i]=max(opt1,opt2);
        return dp[i];
    }
};