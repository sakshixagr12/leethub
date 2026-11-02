class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        if (n<2) return ans;

        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++)
        {
            int x = target - nums[i];
            if (mpp.find(x)!=mpp.end())
            {
                ans.push_back(i);
                ans.push_back(mpp[x]);
                return ans;
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};