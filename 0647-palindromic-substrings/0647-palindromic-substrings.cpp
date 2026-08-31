class Solution {
public:
    int expand (string s, int i, int j) {
        int cnt = 0;
        int n = s.size();
        while (i>=0 && j<n && s[i]==s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    int countSubstrings(string s) {
        int n = s.size();
        if (n==1) return 1;
        int res = 0;
        
        for(int i=0; i<n; i++) {
            //odd count 
            int j = i;
            int oddCnt = expand(s,i,j);

            //even count
            int k = i+1;
            int evenCnt = expand(s,i,k);

            res += (oddCnt + evenCnt);
        }
        return res;
    }
};