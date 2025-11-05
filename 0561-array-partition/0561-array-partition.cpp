class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        //int a;
        for(int i =0;i<n;i+=2){
            sum+=nums[i];
          
            //  for(int j=i+1;j<n;j++){
            //     a=min(nums[i],nums[j]);
            //     sum+=a;
            //     break;
            //  } THIS WILL ALSO WORK 

        }
        return sum;
    }
};