class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sub=1<<nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<sub;i++){
            vector<int>ds;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)) ds.push_back(nums[j]);
            }
            ans.push_back(ds);
        }
        return ans;
    }
};