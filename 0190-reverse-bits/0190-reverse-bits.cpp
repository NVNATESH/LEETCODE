class Solution {
public:
    int reverseBits(int n) {
         vector<int> bits(32,0);
    for(int i=0;i<32;i++){
        bits[i] = n%2;
        n = n/2;
    }
    int reversed = 0;
    for(int i = 0;i<32;i++){
        reversed += bits[i]*pow(2,31-i);
    }
    return reversed;
    }
};