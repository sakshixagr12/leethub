class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        //int ans=0;
        if(n==1){
            return nums[0];
        } else {
            while(n>1){
                vector<int>v;
                for(int i=0;i< n-1;i++){
                    v.push_back((nums[i]+nums[i+1])%10);
                }
                nums=v;
                n--;
                
            }
            return nums[0];
          
        }
        
    }
};