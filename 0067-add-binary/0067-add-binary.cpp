class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size(), n = b.size();
        int i = m-1 ,j = n-1;
        int sum=0,carry=0;
        string ans = "";
        while(i>=0&&j>=0){
            sum=carry;
            if (i>=0) {
                sum=sum+(a[i]-'0');
                i--;
            }
            if (j>=0) {
                sum+=(b[j]-'0');
                j--;
            }
            carry= sum /2;
            ans += (sum%2 +'0');

        }
        while(i>=0){
            sum=carry;
            if(i>=0){
                sum=sum+(a[i]-'0');
                i--;
            }
            carry=sum/2;
            ans+=(sum%2 +'0');
        }
         while(j>=0){
            sum=carry;
            if(j>=0){
                sum=sum+(b[j]-'0');
                j--;
            }
            carry=sum/2;
            ans+=(sum%2 +'0');
        }
       if(carry==1) ans +=(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};