class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int cnt = 0;
        for(int k=2;;k++){
            int basesum = k*(k-1)/2;
            if(basesum>=n) break;
            if((n-basesum)%k==0) cnt++;
        }
        return cnt+1;
    }
};