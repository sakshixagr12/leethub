class Solution {
public:
    void func(int sum,int& ans){
        // if n==0 it means we have already got the combinations 
       if(sum==0){
            ans++;
            return;
        }
        if(sum<0) return;
       //reduce by 1 steps
        func(sum-1,ans);
        // reduce by 2 steps
        func(sum-2,ans);
    }
    int solve(int n) {
        if ( n==0)
        {
            return 1;
        }
        vector<int>dp(n+1,1);
        dp[0]=1;
        dp[1]=1;
        for (int i=2; i<=n; i++)
        {
            int opt1 = dp[i-1];
            int opt2 = dp[i-2];
            dp[i] = opt1+opt2;
        }
        return dp[n];

    }
    int climbStairs(int n) {
       //int ans=0;
        //func(n,ans);
        //return ans;
        return solve(n);
    }
};