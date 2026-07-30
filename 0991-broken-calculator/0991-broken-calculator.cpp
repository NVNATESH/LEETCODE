class Solution {
public:
    int brokenCalc(int startValue, int target) {
        long long b = target;
        int cnt=0;
        while(b>startValue){
            if(b%2!=0){
                b = b+1;
                cnt++;
            }
            b = b/2;
            cnt++;
        }
        return startValue-b+cnt;
    }
};