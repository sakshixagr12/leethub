class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if (n1==0&&n2==0) return 0.0;
        if (n2==0) {
            if (n1&1) return (double)nums1[n1/2];
            else {
                return (double)(nums1[n1/2]+nums1[(n1/2)-1]) / 2.0;
            }
        }
        if (n1==0) {
            if(n2&1) {
                return (double)(nums2[n2/2]);
            }
            else {
                return (double)(nums2[n2/2]+nums2[n2/2-1])/2.0;
            }
        }
        if (n1<n2) {
            int beg = 0;
            int end = n1;
            while(beg<=end) {
                int i1 = beg + (end-beg)/2;
                int i2 = (n1+n2+1)/2 - i1;
                int min1 = (i1 == n1) ? INT_MAX : nums1[i1];
                int max1 = (i1 == 0) ? INT_MIN : nums1[i1 - 1];

                int min2 = (i2 == n2) ? INT_MAX : nums2[i2];
                int max2 = (i2 == 0) ? INT_MIN : nums2[i2 - 1]; 
                if(max1<=min2&&max2<=min1) {
                    if((n1+n2)%2==0){
                        return (max(max1,max2)+min(min1,min2))/2.0;
                    }else {
                        return max(max1,max2);
                    }
                } else if (max2>min1){
                    beg=i1+1;
                }else end = i1-1;
            }
        }else {
            int beg=0;
            int end=n2;

            while(beg<=end) {
                int i2=beg+(end - beg)/2;
                int i1=(n1+n2+1)/2-i2;

                int min1=(i1 == n1) ? INT_MAX : nums1[i1];
                int max1=(i1 == 0) ? INT_MIN : nums1[i1 - 1];

                int min2=(i2 == n2) ? INT_MAX : nums2[i2];
                int max2=(i2 == 0) ? INT_MIN : nums2[i2 - 1];

                if (max1 <= min2 && max2 <= min1) {
                    if ((n1 + n2) % 2 == 0) {
                        return (max(max1, max2) + min(min1, min2)) / 2.0;
                    } else {
                        return max(max1, max2);
                    }
                }
                else if (max1 > min2) {
                    beg = i2 + 1;
                }
                else {
                    end = i2 - 1;
                }
            }
        }

        // if (n1 > n2) {
        //     swap(nums1, nums2);
        //     swap(n1, n2);
        // }
        
        return 0.0;
    }
};