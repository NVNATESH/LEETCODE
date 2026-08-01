class Solution {
public:
    bool iprime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int smallestValue(int n) {
        int m = n;
        int x = m;
        while(1){
            int b = m;
            int sum = 0;
            for(int i=2;i<m,b>1;i++){
                while(b%i==0){
                    sum += i;
                    b = b/i;
                }
            }
            // cout<<sum<<" "<<b<<endl;
            if(sum==0 || sum==m){
                break;
            }
            if(b==1) {
                m = sum;
                x = min(sum,x);
            }
            else{
                break;
            }
        }        
        return x;
    }
};