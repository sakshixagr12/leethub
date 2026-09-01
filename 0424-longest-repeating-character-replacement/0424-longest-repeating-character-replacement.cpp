class Solution {
public:
    int characterReplacement(string s, int k) {
    //    vector<int>mpp(26,0);
        vector<int>mpp(26,0);
        int n = s.size();
        if (n==1)
            return 1;
        
        int i = 0;
        int j = i;
        int maxLen = 1;

        int maxFreq = 0;
        while ( j<n ) {
            int winsize = j-i+1;
            mpp[s[j]-'A']++;
            maxFreq=max(maxFreq,mpp[s[j]-'A']);
            if (winsize-maxFreq <= k) {
                // mpp[s[j]]++;
                maxLen = max(maxLen,j-i+1);
                j++;
            }
            else {
                mpp[s[i]-'A']--;
                i++;
                j++;
            }
            // j++;
        }
        return maxLen;
    }
};