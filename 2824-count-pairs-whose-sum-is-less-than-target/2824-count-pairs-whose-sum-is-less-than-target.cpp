class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0,j=n-1;
        while ( i<j ) {
            if ( nums[i] + nums[j] <  target) {
                count= count + (j-i);
                i++;
            }
            else if (nums[i] + nums[j] >= target ) j--;
        }
        return count;
    }
};