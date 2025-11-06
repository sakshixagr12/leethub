class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector<int>res;
        int i =0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while(i<m&&j<n){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]) j++;
            else i++;
        }
        return res;
        
    }
};