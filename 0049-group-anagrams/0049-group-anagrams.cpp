class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();

        if (n==0)
            return res;
        
        unordered_map <string, vector<string>>  mpp;

        for(int i=0; i<n; i++)
        {
            vector<int> freq(26,0);
            string s = strs[i];
            for(int i=0; i<s.size(); i++)
            {
                freq[s[i]-'a']++;
            }
            string key = " ";
            for(int i=0; i<26; i++)
            {
                // if(freq[i]!=0)
                    key+=to_string(freq[i])+"#";
            }

            mpp[key].push_back(s);
        }

        for(auto it:mpp)
        {
            res.push_back(it.second);
        }

        return res;
    }
};