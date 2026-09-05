class Solution {
public:
    // int function(vector<int>& nums,int n, int idx) {
    //    if(idx >= n){
    //     return 0;
    //    } 
    //    int opt1 = nums[idx] + function(nums,n,idx+2);
    //    int opt2 = 0 + function(nums,n,idx+1);
    //    return max(opt1,opt2);
    // }
    int rob(vector<int>& nums) {
    //    int n = nums.size();
    //    return function(nums, n, 0); 
        int prev1 = 0;
        int prev2 = 0;

        for(auto it : nums) {
            int curr = max(prev1, prev2+it);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};