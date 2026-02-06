class Solution {
public:
    int getLucky(string s, int k) {
        string temp="";
        for(int i =0;i<s.length();i++){
            int ch=s[i]-'a'+1;
            temp+=to_string(ch);
        }
        //int ans=0;
        while(k>0){
            int ans=0;
        for(int i=0;i<temp.length();i++){
            int digit=temp[i]-'0';
            ans+=digit;
        }
        temp=to_string(ans);
        k--;
        }
        return stoi(temp);
    }
};