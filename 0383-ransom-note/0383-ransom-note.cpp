class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mpp;
        for(auto it:ransomNote) {
            mpp[it]++;
        }
        for(auto it : magazine){
            mpp[it]--;
        }
        for(auto it :mpp){
            if(it.second>0) return false;
        }
        return true;
    }
};