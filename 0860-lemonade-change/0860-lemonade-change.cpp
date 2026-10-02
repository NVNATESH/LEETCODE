class Solution {
public:
    bool lemonadeChange(vector<int>& bill) {
        long long  a = 0,b =0, c = 0;
        if(bill[0]!=5) return false;
        for(int i=0;i<bill.size();i++){
            if(bill[i]==5) a++;
            else if(bill[i]==10) b++;
            else c++;
            cout<<i<<endl;
            long long r = bill[i] - 5;
            if(r==15){
                if((b>=1 && a>=1)){
                    b--;
                    a--;
                }
                else if(a>=3){
                    a -= 3;
                }
                else {
                    return false;
                }
            }
            else if(r==5){
                if(a>0){
                    a--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};