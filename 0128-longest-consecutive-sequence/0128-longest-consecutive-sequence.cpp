class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lastSmall=INT_MIN,longest=0,CurrCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==lastSmall){
                CurrCount++;
                lastSmall=nums[i];
            }else if(nums[i]!=lastSmall){
                CurrCount=1;
                lastSmall=nums[i];

            }
            longest=max(longest,CurrCount);
        }
        return longest;
        
    }
};