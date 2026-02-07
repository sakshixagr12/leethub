class Solution {
public:
    int minimumDeletions(string s) {
        int Bcount=0;
        int del=0;
        for(char ch:s){
            if(ch=='b'){
                Bcount++;
            }else{
                del=min(del+1,Bcount);
            }
        }
        return del;
        
    }
};