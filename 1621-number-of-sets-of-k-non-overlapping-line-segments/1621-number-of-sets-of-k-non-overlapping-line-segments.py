class Solution:
    def numberOfSets(self, n: int, k: int) -> int:
        return math.comb(n+k-1,2*k)%(10**9+7)