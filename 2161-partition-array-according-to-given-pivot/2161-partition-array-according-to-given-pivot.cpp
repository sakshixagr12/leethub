class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int it : nums){
            if(it<pivot)ans.push_back(it);
        }
        for(int it :nums){
            if(it==pivot)ans.push_back(it);
        }
        for(int it:nums){
            if(it>pivot)ans.push_back(it);
        }
        nums=ans;
        return  nums;
        
    }
};