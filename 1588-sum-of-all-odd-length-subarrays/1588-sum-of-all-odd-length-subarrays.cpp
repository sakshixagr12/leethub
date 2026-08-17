class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int sum=0;
      int n = arr.size();
      for(int i=0;i<n;i++){
        int len = 0;
        int s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            len = j-i+1;
            if(len%2!=0){
                sum+=s;
            }
        }
      } 
      return sum; 
    }
};