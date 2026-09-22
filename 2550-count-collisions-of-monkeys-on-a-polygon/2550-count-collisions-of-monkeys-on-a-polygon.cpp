class Solution {
public:
    int power(long long base,long long  exp){
            long long ans = 1,mod = 1e9+7;
            while (exp > 0){
                if (exp &1){
                    ans = (ans * base)%(mod);
    }
                    base = (base * base)%(mod) ;
                    exp /= 2;
            }
            return ans%mod;
    }
    int monkeyMove(int n) {
        // cout<<power(2,n)<<endl;
        int m = 1e9+7;
        return (power(2,n)-2+m) %((long long)1e9+7);
    }
};