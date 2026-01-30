class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int i =0;
        int j;
        while(i<n-1){
            j=i+1;
            while(j<n){
            //j=i+1;
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
            j++;}
            i++;
        }
        return ans;
    }
};