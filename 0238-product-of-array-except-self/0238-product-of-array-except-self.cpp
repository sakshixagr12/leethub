class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pp(n);
        pp[0]=nums[0];
        for(int i=1;i<n;i++){
            pp[i]=pp[i-1]*nums[i];
        }
        int prod=1;
        for(int i=n-1;i>0;i--) {
            pp[i]=pp[i-1]*prod;
            prod*=nums[i];
        }
        pp[0]=prod;
        return pp;
    }
};