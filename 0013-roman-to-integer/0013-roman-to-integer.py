class Solution:
    def romanToInt(self, s: str) -> int:
        letter={'I':1,'V':5,'X':10,'L':50,'C':100, 'D':500,  'M':1000}
        total=0
        prev=0
        for c in reversed(s):
            current=letter[c]
            if current<prev:
                total=total-current
            else:
                total=total+current
            prev=current
        return total
        