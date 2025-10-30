class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        int i=0;
        while(i<nums.size()){
            
            if(nums[i]==1){
                count++;
                
                maxcount=max(count,maxcount);

            }else{
            
                count=0;
            }
            i++;
        }
        return  maxcount;
        
    }
};