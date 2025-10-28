class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int idx=-1;
        int beg=0 ,end=nums.size()-1;
        while(beg<=end){
            int mid= beg+(end-beg)/2;
            if( nums[mid]==target){
                idx=mid;
                return idx;

            }else if(target>nums[mid]){
                beg=mid+1;
            }else{
                end=mid-1;
            }
        }
        return idx;
    }
};