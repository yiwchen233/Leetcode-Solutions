class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        count,lsum=1,0
        for c in s:
            lsum=lsum+widths[ord(c)-ord('a')]
            if lsum>100:
                count=count+1
                lsum=widths[ord(c)-ord('a')]
        return count,lsum
