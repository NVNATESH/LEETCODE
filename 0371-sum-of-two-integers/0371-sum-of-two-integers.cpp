class Solution {
public:
    int getSum(int a, int d) {
        int carry = 0,ans = 0;
        for(int i=0;i<32;i++){
            int b = (a>>i) & 1;
            int c = (d>>i) & 1;
            int d = 1<<i;
            cout<<d<<" "<<ans<<" "<<b<<" "<<c<<endl;
            if(b==1 && c==1){
                if(carry==0){
                    carry = 1;
                    continue;
                } 
                ans = ans | d;
            }
            else if(b==1 || c==1){
                if(carry==1){
                    continue;
                }
                ans = ans | d;
            }
            else{
                if(carry){
                    ans = ans | d;
                    carry = 0;
                }
            }
        }
        return ans;
    }
};