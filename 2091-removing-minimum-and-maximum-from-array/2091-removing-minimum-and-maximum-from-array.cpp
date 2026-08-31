class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n==1)
            return 1;
        int mmax=nums[0], maxIdx = 0;
        int mmin = nums[0], minIdx = 0;

        for(int i=1; i<n; i++) {
            if (nums[i]>mmax) {
                mmax =  nums[i];
                maxIdx = i;
            }
            if (nums[i]<mmin) {
                mmin = nums[i];
                minIdx = i;
            }
        }
        int left = max(maxIdx,minIdx)+1;
        int right = n - min(maxIdx,minIdx);
        int both = min(
                        minIdx+1+n-maxIdx,// min left, max right
                        maxIdx+1+n-minIdx // min right, max left 
                    );
        int res = min ({left,right,both});
        return res;
    }
};