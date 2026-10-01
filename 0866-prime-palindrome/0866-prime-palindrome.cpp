class Solution {
public:
    bool isprime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
    int primePalindrome(int n) {
        int i = n;
        if(i<=2) return 2;
        if(i<=3) return 3;
        if(i<=5) return 5;
        if(i<=7) return 7;
        if(i<=11) return 11;
        if (n >= 10000000 && n <= 99999999)
            n = 100000000;
        if(n%6!=0){
            i = ((i/6)+1)*6;
        }
        for(i;;i+=6){
            if((i-1)>=n){
                string s = to_string(i-1);
            int a = 0,b = s.size()-1;
            while(a<b){
                if(s[a]!=s[b]) break;
                a++;
                b--;
            }
            if(a>=b && isprime(i-1)) return i-1;
            }
            if((i+1)>=n){
                string s = to_string(i+1);
            int a = 0,b = s.size()-1;
            while(a<b){
                if(s[a]!=s[b]) break;
                a++;
                b--;
            }
            if(a>=b && isprime(i+1)) return i+1;
            }
        }
        return i;
    }
};