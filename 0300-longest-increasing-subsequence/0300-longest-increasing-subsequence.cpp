class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if ( n==0 || n==1) return n;
        vector<int>v(n);
        v[0]=1;
        for(int i=1; i<n; i++)
        {
            v[i]=1;
            for(int j=0; j<i; j++)
            {
                if(nums[j]<nums[i])
                {
                    v[i]=max(v[i],v[j]+1);
                }
            }
        }
        int ans = v[0];
        for ( auto it:v){
            if (it > ans)
                ans = it;
        }
        return ans;
    }
};