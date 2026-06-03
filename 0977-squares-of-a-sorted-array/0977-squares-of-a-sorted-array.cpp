class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(auto &it : nums){
        //     it=it*it;
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        int n = nums.size();
        vector<int>ans(n);
        int i = 0 , k = n-1;
        int j = n-1 ;
        while(k>=0) {
            int num1 = nums[i]*nums[i];
            int num2 = nums[j]*nums[j];

            if (num1>num2) {
                ans[k]=num1;
                i++;
            }
            else {
                ans[k]=num2;
                j--;
            }

            k--;
        }
        return ans;
        
    }
};