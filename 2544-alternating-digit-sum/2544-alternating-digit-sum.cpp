class Solution {
public:
    int alternateDigitSum(int n) {
        
        int count=0;
        int temp=n;
        while(temp!=0){
            count++;
            temp/=10;
        }
        string s=to_string(n);
        //int cnt=0
        //temp=n;
        int i=0;
        int ans=0;
        while(i<count){
            int digit=s[i]-'0';
            if(i%2==0){
                ans+=digit;
                //cnt++;
            }else{
                ans-=digit;
            }
            i++;
        }
        return ans;

        
    }
};