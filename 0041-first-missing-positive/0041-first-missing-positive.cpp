class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int it:nums){
            if(it>0){
                mpp[it]=1;
            }
        }
        int n = nums.size();
        for(int i=1;i<=n;i++){

            if(mpp.find(i)==mpp.end()) return i;
        }
       
        return n+1;
        
    }
};