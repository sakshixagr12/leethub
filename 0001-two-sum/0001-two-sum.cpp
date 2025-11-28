class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n  = nums.size();
        int i=0;
        int j=n-1;
        vector<int>ans;
        while(i<n){
            j=n-1;
            while(j>=0){
                if(nums[i]+nums[j]==target && i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                j--;
            }
            i++;

        }
        return ans;
        
    }
};