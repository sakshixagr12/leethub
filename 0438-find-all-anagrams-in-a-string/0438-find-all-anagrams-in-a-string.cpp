class Solution {
public:
bool isFreqSame(int hash1[],int hash2[]){
        for(int i = 0 ; i<26 ;i++){
            if(hash1[i]!=hash2[i]) return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int l = s.size() ; 
        int m  = p.size();

        int freq[26]={0};
        for(char c : p) freq[c-'a']++;

        for(int i = 0;i<l;i++) {
            int Winsize=0,idx=i;
            int freq1[26]={0};

            while(Winsize<m&&idx<l) {
                freq1[s[idx]-'a']++;
                Winsize++;
                idx++;
            }
            if(isFreqSame(freq,freq1)==true) {
                ans.push_back(i);
            }

        }
        return ans;
    }
};