// class Solution {
// public:
//     int threeSumMulti(vector<int>& arr, int target) {
//         int n = arr.size();
//         sort(arr.begin(),arr.end());
//         if (n<3) return 0;
//         int mod = 1e9+7;
//         long res=0;
//         for(int i =0;i<n-2;i++){
//            // if(i>0&&arr[i]==arr[i-1]) continue;
//             int j = i+1;
//             int k =n-1;
//             while(j<k){
//                 if(arr[i]+arr[j]+arr[k]==target) {
//                    // res.push_back({nums[i],nums[j],nums[k]});
//                    res++;
//                     j++;
//                     k--;
//                     while(j<k&&arr[j]==arr[j-1])j++;
//                     while(k>j&&arr[k]==arr[k+1])k--;
//                 } else if (arr[i]+arr[j]+arr[k]>target)k--;
//                 else j++;
//             }
//         }
//         return res;
//     }
// };
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int MOD = 1e9 + 7;
        long ans = 0;
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < arr.size() - 2; ++i) {
            int j = i + 1;
            int k = arr.size() - 1;
            
            while (j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum < target) {
                    j++;
                } else if (sum > target) {
                    k--;
                } else if (arr[j] != arr[k]) {
                    // Count occurrences of arr[j]
                    int left_count = 1;
                    while (j + 1 < k && arr[j] == arr[j+1]) {
                        left_count++;
                        j++;
                    }
                    // Count occurrences of arr[k]
                    int right_count = 1;
                    while (k - 1 > j && arr[k] == arr[k-1]) {
                        right_count++;
                        k--;
                    }
                    
                    ans = (ans + (long)left_count * right_count) % MOD;
                    j++;
                    k--;
                } else {
                    // arr[j] == arr[k] means all numbers between j and k are the same
                    int n = k - j + 1;
                    ans = (ans + (long)n * (n - 1) / 2) % MOD;
                    break; // Move to the next 'i'
                }
            }
        }
        return ans;
    }
};