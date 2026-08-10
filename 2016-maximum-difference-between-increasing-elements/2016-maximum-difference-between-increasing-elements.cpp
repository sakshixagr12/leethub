class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff=-1;
        int minVal=nums[0];
        int n = nums.size();
        for(int i =1;i<n; i++){
            if(nums[i]>minVal) maxDiff=max(maxDiff,nums[i]-minVal);
            else minVal=min(minVal,nums[i]);
        }
        return maxDiff;
    }
};