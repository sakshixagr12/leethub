class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0;
        int j=0;
        int m = nums1.size() ,n = nums2.size();
        vector<int>ans;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
        nums1=ans;
        float median=0.0;
        int total = m+n;
    
        if(total%2!=0) return nums1[total/2];
        else {
            median=(nums1[total/2-1]+nums1[total/2])/2.0;
        }
        return median;
        
    }
};