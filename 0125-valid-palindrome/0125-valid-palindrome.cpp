class Solution {
    bool isAlphaNumeric(char ch){
        if((ch>='0'&& ch<='9') || (tolower(ch)>='a'&& tolower(ch)<='z')) return true;
        else return false;
    }
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!isAlphaNumeric(s[i])){
            i++ ;
            continue;
            }
            if(!isAlphaNumeric(s[j])){
            j--;
            continue;
            }
            if (tolower(s[i])!= (tolower(s[j]))) return false;
            i++;
            j--;
        }
        return true;
    }
};