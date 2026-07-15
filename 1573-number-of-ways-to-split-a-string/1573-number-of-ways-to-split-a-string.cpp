class Solution {
public:
    int numWays(string s) {
        long long n = 0,mod = 1e9+7,z = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') n++;
            else z++;
        }
        if(z==s.size()){
            return (((long long)(z-1)*(z-2))/2)%1000000007;
        }
        if(n%3!=0) return 0;
        long long i = 0,j = s.size()-1,a=0,b=0,d = 0,c = n/3;
        for(i=0;i<s.size();i++){
            if(d==c) break;
            if(s[i]=='1') d++;
        }
        d = 0;
        for(j;j>=0;j--){
            if(d==c) break;
            if(s[j]=='1') d++;
        }
        while(s[i]!='1'){
            a++;
            i++;
        }
        while(s[j]!='1'){
            b++;
            j--;
        }
        long long res = (((a+1)%mod) * ((b+1)%mod))%mod;
        return res;
    }
};