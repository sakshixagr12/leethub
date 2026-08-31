class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return "1"
        if n==2:
            return "11"
        s = "11"
        for i in range(n-2):
            t = ""
            s += "#"
            c = 1
            # l=len(s)
            for j in range(1,len(s)):
                if s[j] != s[j-1]:
                    t += str(c)
                    t += s[j-1]
                    c = 1
                else :
                    c += 1
            s = t
        return s

        