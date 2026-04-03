class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       vector<int>ans;
       int n = nums.size();
       if (n==0) return {};
       for(int i = 0; i<n; i++) {
        bool found = false;
        for (int j = i+1; j<i+n; j++) {
            int idx = j % n;
            if (nums[idx]>nums[i]) {
                ans.push_back(nums[idx]);
                found = true;
                break;
            }
        }
        if (found == false) ans.push_back(-1);
       } 
       return ans;
    }
};