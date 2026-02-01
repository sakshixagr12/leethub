class Solution {
public:
    int search(vector<int>& nums, int target) {
        int idx=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid]==target){
                idx=mid;
                return idx;
            }
            else if(nums[mid]>target){
                high=mid-1;
            } 
            else low=mid+1;
        }
        
        return idx;
    }
};