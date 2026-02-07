class Solution {
public:
    bool checkString(string s) {
        //bool ans = true ;
        for(int i = 0 ; i < s.length() ; i++ ){
            if (s[i]=='b'&& s[i+1]=='a') return false;

        }
        return true;
        
    }
};