class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        vector<int>v;
        //int sum=0;
        

        // while(i<n-1){
        //     int j=i+1;
            
        //     while(j<n){
        //         sum=nums[i]+nums[j];
        //         if(sum==target){
        //             v.push_back(i);
        //             v.push_back(j);
            
        //         }else j++;
        //         i++;
        //     }

        //     // sum=arr[i]+arr[j];
        // }
        // return v;
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
         }
         return v;
    }
};