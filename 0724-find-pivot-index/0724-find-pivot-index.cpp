class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            long long lsum=0;
            long long rsum=0;
            //leftSum
            for(int j = 0 ; j<i ; j++){
                lsum+=nums[j];
            }
            //rightSum
            for(int j = i+1 ; j<n ; j++){
                rsum+=nums[j];
            }
            if(lsum==rsum)return i;
        }
        return -1;
    }
};