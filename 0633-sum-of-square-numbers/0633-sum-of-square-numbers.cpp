class Solution {
public:
   // bool sq(int n)
    bool judgeSquareSum(int c) {
        long long  l = 0;
        long long  r = sqrt(c);
        if(c==0||c==1)
            return true;
        while(l<=r) {
            if((l*l+r*r)==c) return true;
            if ((l*l+r*r)<c) l++;
            else r--;
        }
        return false;
    }
};