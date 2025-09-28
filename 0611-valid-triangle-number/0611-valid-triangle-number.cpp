class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        //int count =0;
       // int i=0,j,k;
        // while(i<nums.size()){
        //     j=i+1;
        //     while(j<nums.size()){
        //         k=j+1;

        //         while(k<nums.size()){
        //         if(nums[i]+nums[j]>nums[k] && nums[i]+nums[k]>nums[j] &&nums[j]+nums[k]>nums[i]){
        //             count++;
        //         }
        //         k++;
        //    }
        //     j++;
        //     }i++;
        // }
        // return count;
        sort(nums.begin(),nums.end());
        int count = 0;

        for(int k = nums.size()-1 ; k>=2 ; k--){
            int i = 0 ;
            int j = k-1;
            while ( i < j){
                if ( nums[i] + nums[j] > nums[k]){
                    count+=(j-i);
                    j--;
                }else{
                    i++;
                }
            }
        }
        return count ;
    }
};