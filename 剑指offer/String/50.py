class Solution:
    def firstUniqChar(self, s: str) -> str:
        m = {}
        for c in s:
            if c in m:
                m[c]=m[c]+1
            else:
                m[c]=1
        for c in s:
            if m[c]==1: 
                return c
        return ' '
