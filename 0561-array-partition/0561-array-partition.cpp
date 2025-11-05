class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int a;
        for(int i =0;i<n-1;i+=2){
            for(int j=i+1;j<n;j++){
                a=min(nums[i],nums[j]);
                sum+=a;
                break;
            }

        }
        return sum;
    }
};