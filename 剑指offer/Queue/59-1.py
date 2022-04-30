class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        dq=collections.deque();
        res,n=[],len(nums)
        for i,j in zip(range(1-k,n-k+1),range(n)):
            if i>0 and dq[0]==nums[i-1]:
                dq.popleft()
            while dq and dq[-1]<nums[j]:
                dq.pop()
            dq.append(nums[j])
            if i>=0:
                res.append(dq[0])  
        return res
