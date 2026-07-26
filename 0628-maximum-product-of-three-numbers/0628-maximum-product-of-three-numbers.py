class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        a = nums[0]*nums[1]*nums[-1]
        b = nums[-1]*nums[-2]*nums[-3]
        c = max(a,b)
        return c