class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mp=INT_MIN;
        int product;

        // for(int i=0 ; i< nums.size() ;i++){
        //     int j =i+1;
        //     int k = nums.size()-1;
        //     while(j<k){
        //     product= nums[i]*nums[j]*nums[k];
        //     mp=max(product,mp);
        //     j++;
        //     k--;

        // }}
        sort(nums.begin(), nums.end());
        int n = nums.size() ;
        for(int i =0 ; i < n-2 ; i++){
            product = nums[i] * nums[i+1] * nums[n-1];
            mp = max(product,mp);
        }
        return mp;
        
    }
};