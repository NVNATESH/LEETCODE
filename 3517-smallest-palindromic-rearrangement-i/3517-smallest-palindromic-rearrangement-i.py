class Solution:
    def smallestPalindrome(self, s: str) -> str:
        freq = {}
        for stra in s :
            freq[stra] = freq.get(stra,0)+1
        c = dict(sorted(freq.items()))
        lst = [""] * len(s)
        e, f, d = 0,len(s)-1,-1
        for a,b in c.items():
            if b > 0 :
                if b%2!=0 :
                    d = a
                    b -= 1
                while b > 0 :
                    lst[e] = a
                    lst[f] = a
                    e+=1
                    f-=1
                    b -= 2
        if d!=-1 :
            lst[len(lst)//2] = d
        st = "".join(lst)
        return st


                
