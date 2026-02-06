class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int temp;
        for(int i =0;i<nums.size();i++){
            if(nums[i]<9){
                ans.push_back(nums[i]);
            }else{
                // temp=nums[i];
                // int rem=0;
                // while(temp!=0){
                //     ans.push_back(rem);
                //     temp/=10;
                // }
                string s =to_string(nums[i]);
                for(int j=0;j<s.size();j++){
                    int digit=s[j]-'0';
                    ans.push_back(digit);

                }
            }
        }
        return ans;
        
    }
};