class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int lastSmallest=INT_MIN;
        int len=1;
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(nums[i]-1==lastSmallest){
                cnt++;
                lastSmallest=nums[i];
            }else if (nums[i]!=lastSmallest){
                cnt=1;
                lastSmallest=nums[i];
            }
            len=max(cnt,len);
        }
        return len;
        
    }
};