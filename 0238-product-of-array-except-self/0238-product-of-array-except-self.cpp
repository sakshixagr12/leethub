class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        

        if (n==0) return ans;
        vector<int> preproduct(n);
        preproduct[0] = nums[0];

        for( int i=1; i<n; i++){
            preproduct[i] = preproduct[i-1] * nums[i];
        }

        int prod = 1;
        for (int i=n-1; i>0; i--){
            ans[i] = preproduct[i-1] * prod;
            prod = prod * nums[i];
        }
        ans[0] = prod;
        return ans;
    }
};