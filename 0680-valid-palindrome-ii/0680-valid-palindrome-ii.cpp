class Solution {
public:
    bool checkPal(string s,int i,int j) {
        int n = s.size();
        while(i<=j) {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        if (n==1) return true;

        int i =0;
        int j = n-1;

        while(i<=j) {
            if (s[i]==s[j]){
                i++;
                j--;
            }else {
                bool check1= checkPal(s,i+1,j);
                bool check2= checkPal(s,i,j-1);

                return check1||check2;
            }
        }
        return true;
    }
};