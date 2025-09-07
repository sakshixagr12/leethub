class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int f=0;
       int i,j;
       
    //    while(i<j) {
    //     if(nums[i]==nums[j]){
    //         f++;
    //     }
    //     i++;
    //    }
    //    if(f>0){
    //     return true;
    //    }
    //    else {
    //     return false;
    // }}
    sort(nums.begin(),nums.end());
    for(i=1;i<nums.size();i++){
        //for(j=i+1;j<nums.size();j++){
            if(nums[i]==nums[i-1]){
                f++;
                break;
            }
        
    }
    if(f>0){
        return true;
    }else{
        return false;
    }}
};