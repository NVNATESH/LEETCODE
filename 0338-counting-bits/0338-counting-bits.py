class Solution:
    def countBits(self, n: int) -> List[int]:
        p = []
        for i in range(n+1):
            p.append(bin(i).count("1"))
        return p
