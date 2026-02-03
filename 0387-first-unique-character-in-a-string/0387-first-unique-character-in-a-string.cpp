class Solution {
public:
    int firstUniqChar(string s) {
    //     unordered_map<char,int>mpp;
    //     //int idx=-1;
    //     for(char ch : s){
    //         mpp[ch]++;
    //     }
    //    for(int i =0;i<s.size();i++){
    //     if(mpp[s[i]]==1){
    //         return i;
    //     }
    //    }
    //     return -1;
    int mpp[26];
    for(int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
    }
    for(int i =0;i<s.size();i++){
        if(mpp[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
    }
};