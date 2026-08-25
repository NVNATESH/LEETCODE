class Solution {
public:
    int isprime(int n){
        if(n<=1) return 0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size(),maxp = 0;
        for(int i=0;i<n;i++){
            int d1 = nums[i][i];
            int d2 = nums[i][n-i-1];
            if(isprime(d1)) maxp = max(maxp,d1);
            if(isprime(d2)) maxp = max(maxp,d2);
        }
        return maxp;
    }
};