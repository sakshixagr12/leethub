class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        int idx=0;
        string ans="";
        for(int  i=0;i<n;i++ ){
            char c = word[i];
            int cnt =0;
            while(i<n&&word[i]==c && cnt<9){
                i++;
                cnt+=1;
            }
           ans+=to_string(cnt);
           ans+=c;
            i--;
        }
        return ans;
    }
};