class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n = nums.size();
        //finding the break point
        for(int i =n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        // if array doesn't have next permutation , the first one will be the next permutation 
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //swapping with just greater element with nums[idx]
        for(int i=n-1;i>=idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        //arranging remaining in sorted order
        reverse(nums.begin()+idx+1,nums.end());
    }
};