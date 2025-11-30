class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        if x<0:
            sign=-1
        else:
            sign=1

        x=abs(x)

        ans=0
        while(x!=0):
            rem= x%10
            ans=ans*10+rem
            x//=10

        ans=ans*sign
        if(ans >INT_MAX or ans<INT_MIN):return 0
        return ans