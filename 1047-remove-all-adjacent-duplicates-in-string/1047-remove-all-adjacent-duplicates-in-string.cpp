class Solution {
public:
    string removeDuplicates(string s) {
        
        int n = s.size();
        string temp = "";
        int i = 0;
        while (i<n) {
            
            int m = temp.size();
            
            if(m > 0 && temp[m-1]==s[i]) {
                temp.pop_back();
            }
            else {
                temp.push_back(s[i]);
            }
            i++;
        }
        return temp;
    }
};