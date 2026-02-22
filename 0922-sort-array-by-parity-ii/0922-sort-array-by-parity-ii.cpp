class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int even=0;
        int odd=1;
        while(even<n&&odd<n){
            if(even%2==nums[even]%2) even+=2;
            else if (odd%2==nums[odd]%2)
                odd+=2;
            else{
                swap (nums[even],nums[odd]);
                even+=2;
                odd+=2;
            }
        }
        return nums;
    }
};