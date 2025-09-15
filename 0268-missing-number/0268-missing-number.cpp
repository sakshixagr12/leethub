class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // int mn=0;
        // int i=0;
        // while(i<=n){
        
        //     }
        sort(nums.begin(),nums.end());
        //int i=0;
       // int mn;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
        
    }
};