class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        d = {}
        for num in nums:
            if num not in d:
                d[num]=1
            else:
                return num
