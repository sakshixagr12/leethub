class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>mpp;
        for (auto it:strs) {
            string s = it;
            sort(it.begin(),it.end());
            mpp[it].push_back(s);
        }
        vector<vector<string>>result;
        for(auto it : mpp) {
            result.push_back(it.second);
        }
        return result;
    }
};