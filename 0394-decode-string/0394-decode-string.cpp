class Solution {
public:
    string decodeString(string s) {
       stack<int>nums;
       stack<string>str;
       int num=0;
       string curr="";
       int n = s.size();
       for(int i = 0 ; i < n ; i++ ){
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }else if (s[i]=='[') {
                nums.push(num);
                str.push(curr);
                curr="";
                num=0;

            } else if (s[i]==']'){
                int k = nums.top();
                nums.pop();
                string prev=str.top();
                str.pop();
                string temp="";
                for(int j =0 ;j<k;j++){
                    temp+=curr;
                }
                curr=prev+temp;
            }else {
                curr+=s[i];
            }
       }
        return curr;

    }
};