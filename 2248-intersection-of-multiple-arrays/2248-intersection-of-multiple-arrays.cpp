// class Solution {
// public:
//     vector<int> intersection(vector<vector<int>>& nums) {
//         int n = nums.size();
//         while(nums.size()>1){
//             vector<vector<int>>temp;
//             for(int i =0;i<n;i+=2) {
//                 if(i+1 < n){
//                     temp.push_back(set_intersection((nums[i].begin(),nums[i].end()),(nums[i+1].begin(),nums[i+1].end()));
//                 }
//                 else {
//                     temp.push_back(nums[i]);
//                 }
//             }
//             nums=temp;
//         }
//         return nums[0];
//     }
// };
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>counts(1001,0); 
        int n = nums.size();
        for (int i= 0;i<n;i++) {
            for (int j=0;j<nums[i].size();j++) {
                counts[nums[i][j]]++;
            }
        }
        vector<int>res;    
        for(int i=1;i<=1000;i++) {
            if(counts[i]==n) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};