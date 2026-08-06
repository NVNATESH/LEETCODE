class Solution {
public:
    int smallestNumber(int n, int t) {
        int curr = n;
        while(true){
            int res = 1;
            while(curr){
                res *= (curr%10);
                curr /= 10;
            }
            if(res%t==0) return n;
            n++;
            curr= n;
        }
        return 0;
    }
};