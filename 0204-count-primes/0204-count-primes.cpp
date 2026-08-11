class Solution {
public:
    int countPrimes(int n) {
        vector<int> v(n+1,1);
        for(int i=2;i<n;i++){
            for(int j=i+i;j<n;j=j+i){
                v[j] = 0;
            }
        }
        int a=0;
        for(int i=2;i<v.size()-1;i++){
            if(v[i]!=0){
                a++;
            }
        }
        return a;
    }
};