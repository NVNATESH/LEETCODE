class Solution {
public:
    int countCommas(int n) {
        int res = 0,a=1000,cmd = 1;
        while(a<=n){
            res += (n-a+1);
            a *=1000;
        }
        return res;
    }
};