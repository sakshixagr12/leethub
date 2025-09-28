class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //int  maxp=0,p;
        sort(nums.begin(),nums.end());
        // for(int i =0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=nums.size()-1;k>j;k--){
        //             if(nums[i]+nums[j]>nums[k]&&nums[j]+nums[k]>nums[i]&&nums[k]+nums[i]>nums[j]){
        //                 p=nums[i]+nums[j]+nums[k];
        //                 maxp=max(p,maxp);
        //             }
        //         }
        //     }
        // }
        // return maxp;
        for(int k =nums.size()-1;k>=2;k--){
        //     int i=0,j=k-1;
        //     while(i<j){
        //         if(nums[i]+nums[j]>nums[k]){
        //             p=nums[i]+nums[j]+nums[k];
        //             maxp=max(maxp,p);
        //             j--;
        //         }
        //         else{
        //             i++;
        //         }
        //     }
        // }
        // return maxp;
        if(nums[k-2]+nums[k-1]>nums[k]){
            return nums[k]+nums[k-1]+nums[k-2];
        }}
        return 0;
    }
};