class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        for(int i=0;i< nums.size();i++){
            if(count==0){
                count++;
                element=nums[i];
            }
            else if(nums[i]==element) count++;
            else count--;
        }
        int cnt=0;
        for(int i =0;i<nums.size();i++){
            if(element==nums[i]){
                cnt ++;
            }
        }
        if(cnt > (nums.size()/2)) return element;
        else return -1;
        
    }
};