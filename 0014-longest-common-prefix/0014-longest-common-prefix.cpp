class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0],ans="",temp="";
        for(int i=1; i<strs.size(); i++){
            temp="";
            for(int j=0; j<min(s.size(),strs[i].size()); j++){
                if(strs[i][j]==s[j]){
                    temp+=s[j];
                }
                else break;


            }
            s=temp;
            
        }
        return s;
    }
};