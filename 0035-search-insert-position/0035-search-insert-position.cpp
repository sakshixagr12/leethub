class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //int idx=-1;

        // for(int i=1;i< nums.size();i++){
        //     if(nums[i-1]==target){
        //         idx=i-1;
        //     }else if (target>nums[i-1] && target<nums[i]){
        //         idx=i;
        //     }
        // }
        // return idx;
       int beg=0,end=nums.size()-1;
       
       while(beg<=end){
        int mid=(beg+end)/2;
        if(nums[mid]==target){
            return mid;
            break;
        }else if(target>nums[mid]){
            beg=mid+1;
        } else{
            end=mid-1;
        }
       }
        return beg;
        
    }
};