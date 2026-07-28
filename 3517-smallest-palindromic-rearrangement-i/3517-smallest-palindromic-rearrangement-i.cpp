class Solution {
public:
    string smallestPalindrome(string s) {
        int  n = s.size();
        if(n==1)return s;
        string half="";
        int i =0;
        for(i=0;i<(n+1)/2;i++) half+=s[i];
        string mid="";
        if(n%2!=0){
            mid+=s[n/2];
            half.pop_back();
        }
        sort(half.begin(),half.end());
        string revHalf=half;
        reverse(revHalf.begin(),revHalf.end());
        return half+mid+revHalf;
    }
};