class Solution(object):
    def duplicateZeros(self, arr):
        """
        :type arr: List[int]
        :rtype: None Do not return anything, modify arr in-place instead.
        """
        n=len(arr)
        idx=0
        while idx<n:
            if arr[idx]!=0:
                idx=idx+1
            else:
                arr.pop(-1)
                arr.insert(idx,0)
                idx=idx+2
