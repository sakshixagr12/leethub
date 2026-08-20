class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long long first=nums[0];
        long long  second=LLONG_MIN;
        for(int i=1;i<n;i++){
            if ( nums[i] > first) {
                second = first;
                first = nums[i];
            } else if (nums[i]<first && nums[i]>second) 
                second = nums[i];
        }
        if(second==LLONG_MIN) return first;
        if (n<3) return first;
        long long third =LLONG_MIN;
        for(int i=0;i<n;i++) {
            if (nums[i]>third && nums[i]<second)
                third=nums[i];
        }

        return third==LLONG_MIN? first : third;
    }
};