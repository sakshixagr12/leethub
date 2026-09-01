class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        freq = [0]*26
        n = len(s)
        if n==1:
            return 1
        i = 0
        j = i
        maxlen = 0; maxfreq = 0
        while (j<n):
            winsize = j-i+1
            freq[ord(s[j])-ord('A')] += 1
            maxfreq = max(maxfreq,freq[ord(s[j])-ord('A')])
            if winsize-maxfreq <= k:
                maxlen = max(maxlen,j-i+1)
                j+=1
            else:
                freq[ord(s[i])-ord('A')]-=1
                i+=1
                j+=1
        return maxlen
