
bool ls(vector<int>&nums,int n){
    for(int i =0;i<nums.size();i++){
        if(nums[i]==n) {
            //n=n*2;
            return true;
    }}
    return false;
}

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       while(ls(nums,original)){
        original*=2;
       }
      return original;
}};