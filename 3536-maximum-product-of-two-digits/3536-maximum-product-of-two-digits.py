class Solution:
    def maxProduct(self, n: int) -> int:
        a=[]
        while(n>0) :
            b = n%10
            a.append(b)
            n = n//10
        a.sort()
        return a[-1]*a[-2]