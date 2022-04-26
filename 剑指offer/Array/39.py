class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt={}
        for num in nums:
            if num not in cnt:
                cnt[num]=1
            else:
                cnt[num]=cnt[num]+1
            if cnt[num]>len(nums)/2:
                return num
