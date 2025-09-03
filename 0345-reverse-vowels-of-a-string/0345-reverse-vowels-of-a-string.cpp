class Solution {
public:
    string reverseVowels(string s) {
        
        int i =0, j=s.size()-1;
        char c,d;
        //char d=s[j];
        while(i<=j){
            c=tolower(s[i]);
            d=tolower(s[j]);
            if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) i++;
            else if(!(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')) j--;
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};