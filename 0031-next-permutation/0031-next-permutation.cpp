class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n = nums.size();
        //finding the breakpoint 
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {
                idx=i;
                break;
            }
        }
        //if the given array is the last permutation return the first one
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //swapping the nums[i] with just greater element;
        for(int i = n-1;i>=idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        //sorting the remaining elements in ascending order
        sort(nums.begin()+idx+1,nums.end());

    }
};