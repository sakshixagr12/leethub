class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        if(n>m) return -1;
        int j=0;
        for(int i=0;i<m;i++){
            if(haystack[i]==needle[j]){
                
                j++;
                if(j==n) return i-j+1;
            } else {
                i=i-j;
                j=0;
            }
        }
        return -1;
    }
};