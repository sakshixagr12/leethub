class Solution {
public:
    bool isFreqSame(vector<int>hash1,vector<int>hash2){
        for(int i = 0 ; i<26 ;i++){
            if(hash1[i]!=hash2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        //sliding window approach

        vector<int>hash1(26,0);
        for(char c:s1) hash1[c-'a']++;

        int n =s1.size();
       
        int winSize=n;

        for(int i =0;i<s2.size();i++){
            int winIdx=0;
            int idx=i;
             vector<int>hash2(26,0);
            while(winIdx<winSize && idx < s2.size()) {
                hash2[s2[idx]-'a']++;
                winIdx++;
                idx++;
            }
            if (isFreqSame(hash1,hash2)) return true;
        }

        return false;
    }
};