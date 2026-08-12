class Solution {
public:
    long long p(long long base,long long exp,long long mod){
        long long res= 1;
        if(exp==0) return res;
        while(exp>0){
            if(exp&1){
                res = ((res % mod) * base)%mod;
                exp--;
            }
                base = (base*base)%mod;
                exp = exp/2;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        if(n==0) return 0;
        long long ans = 0,mod = 1e9+7;
        long long o = n/2 + (n%2==0 ? 0:1);
        long long e = n/2;
        cout<<o<<e<<endl;
        long long res = (p(5,o,mod)%mod) * ((p(4,e,mod))%mod);
        cout<<p(5,o,mod)<<" " <<p(4,e,mod)<<endl;
        return res%mod;
    }
};