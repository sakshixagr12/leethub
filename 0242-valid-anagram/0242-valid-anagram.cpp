class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int>mpp;
        // for(auto it : s)mpp[it]++;
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i = 0, j=0;
        while(i<s.size()){
            if(s[i]!=t[j]) return false;
            i++;
            j++;
        }
        return true;
    }
};