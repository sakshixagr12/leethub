class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        // int ans = 0;
        // int largest=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]>largest){
        //         largest=nums[i];
        //         ans=i;
        // }}
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]*2 > largest && largest!=nums[i]) return -1;
        // }
        // return ans;
       int ans=-1;
       int largest=-1;
       int slargest=-1;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            slargest=largest;
            largest=nums[i];
            ans=i;
        }
        else if(nums[i]>slargest) slargest=nums[i];
       }
       if(slargest *2>largest) return -1;
       return ans;
    }
};