class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mpp1;
        unordered_map<string ,char>mpp2;
        int j=0;
        for(int i=0;i<pattern.size();i++){
            string word="";

            while(j<s.size() && s[j]==' ')
                j++;
            if (j >= s.size())
                return false;
            while(j<s.size()&&s[j]!=' '){
                word+=s[j];
                j++;
            }
            
            if(mpp1.find(pattern[i])!=mpp1.end()) {
                if(mpp1[pattern[i]]!=word)
                    return false;   
            }else mpp1[pattern[i]]=word;


            if(mpp2.find(word)!=mpp2.end()) {
                if(mpp2[word]!=pattern[i])
                    return false;
            }
            else {
                mpp2[word]=pattern[i];
            }
        }

        while(j<s.size()) {
            if(s[j]!=' ') return false;
            j++;
        }
        return true;
    }
};