class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;
        int beg=0 , end = nums.size() - 1;
        int first=-1;
        
        int n=nums.size();
        if (n==0) {
            return {-1,-1};
        }
        while ( beg <= end) {
            int mid = beg+(end-beg)/2;

            if(nums[mid]==target) {
                if (mid==0 || nums[mid-1]!=target)
                    {
                        first=mid;
                        break;
                    }
                    end = mid-1;
            } else if (nums[mid] < target) {
                beg = mid+1;
            }else end = mid-1;
        }
        int last=-1;
        beg=0;
        end = nums.size()-1;
        while(beg<=end) {
            int mid = beg+(end-beg)/2;
            if (nums[mid]==target){
                if (mid == n-1 || nums[mid+1]!=target)
                 {
                    last=mid;
                    break;
                 }
                 beg = mid+1;
            }
            else if ( nums[mid] < target) {
                beg = mid+1;
            }else {
                end = mid-1;
            }
        }
        ans.push_back (first);
        ans.push_back (last);

        return ans;
    }
};