class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return -1;
        if(n==1) return nums[0];
        int maxProd=nums[0];
        int minProd=nums[0];
        int ans = nums[0];
        for(int i =1;i<nums.size();i++){
            if (nums[i]<0){
                swap(maxProd,minProd);
            
            }
                maxProd*=nums[i];
                minProd*=nums[i];
                maxProd=max(maxProd,nums[i]);
                minProd=min(minProd,nums[i]);
                ans= max(ans,maxProd);
            }
        
        return ans;
    }
};