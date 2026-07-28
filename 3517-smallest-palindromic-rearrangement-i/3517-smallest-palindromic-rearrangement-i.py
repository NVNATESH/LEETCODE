import numpy as np
class Solution:
    def smallestPalindrome(self, s: str) -> str:
        a = np.bincount(np.frombuffer(s.encode(),np.uint8),minlength=123)[97:].tolist()
        half = "".join(c*(k//2) for c,k in zip(ascii_lowercase,a))
        mid = "".join(c*(k%2) for c,k in zip(ascii_lowercase,a))
        return half + mid + half[::-1]
        