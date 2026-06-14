int expand_from_centre(string &str, int i ,int j) {
    int n = str.size();
    while ( (i >= 0 && j<n) && (str[i] == str[j]) ){
        i--;
        j++;
    }
    return j-i-1;
}   
class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int end = 0;
        for(int i = 0 ; i <  s.size(); i++){
            int len1 = expand_from_centre(s,i,i+1);
            int len2 = expand_from_centre(s,i,i);
            int len = max( len1 , len2);
            if(end - start < len) {
                start = i - (len-1)/2;
                end = i + len/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};