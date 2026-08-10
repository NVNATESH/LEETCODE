class Solution {
public:
    int minFlips(int a, int b, int c) {
        int m = max({bit_width((unsigned)a),bit_width((unsigned)b),bit_width((unsigned)c)});
        bitset<32> a1(a);
        bitset<32> b1(b);
        bitset<32> c1(c);
        int res = 0;
        for(int i=m;i>=0;i--){
            if(c1[i]==1){
                if(a1[i]==1 || b1[i]==1){
                    continue;
                }
                else{
                    res++;
                }
            }
            if(c1[i]==0){
                if(a1[i]==0 && b1[i]==0){
                    continue;
                }
                else if((a1[i]==1 && b1[i]==0) || (a1[i]==0 && b1[i]==1)){
                    res++;
                }
                else{
                    res += 2;
                }
            }
        }
        return res;
    }
};