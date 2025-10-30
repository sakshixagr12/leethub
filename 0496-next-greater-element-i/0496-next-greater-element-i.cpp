class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
           auto it=find(nums2.begin(),nums2.end(),nums1[i]);
           int index=it-nums2.begin();
           bool isthe=0; 
           for(int j=index; j<nums2.size(); j++){
                 if(nums2[j]>nums1[i]){
                    ans.push_back(nums2[j]);
                    isthe =1;
                    break;
                }
            }
            if(isthe==0)ans.push_back(-1);


        }
        return ans;
    }
};