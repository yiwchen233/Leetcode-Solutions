class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        xy = sum(v>0 for row in grid for v in row)
        yz = sum(map(max, grid))
        zx = sum(map(max, zip(*grid)))
        return xy+yz+zx
