class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i =0,j=0;
        int n1=word1.size();
        int n2=word2.size();
        int count=0;
        while(i<n1&&j<n2){
            //count=0;
            if(count%2==0) {
                ans+=word1[i];
                i++;}

            else {
                ans+=word2[j];
                j++;}
                count++;
        }
        while(i<n1){
            ans+=word1[i];
            i++;
        }
        while(j<n2){
            ans+=word2[j];
            j++;
        }
        return ans;
        
    }
};