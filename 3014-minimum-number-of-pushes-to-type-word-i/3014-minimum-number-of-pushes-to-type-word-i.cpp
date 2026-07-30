class Solution {
public:
    int minimumPushes(string word) {
        int res = 0,n = word.size(),a = 1;
        while(n>0){
            if(n>8)res += 8*a;
            else res +=n*a;
            n -=8;
            a++;
        }
        return res;
    }
};