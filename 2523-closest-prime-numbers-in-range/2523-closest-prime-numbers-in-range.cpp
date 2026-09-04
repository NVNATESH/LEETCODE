class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n = right+1;
        if (n <= 2)
            return {-1,-1};
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 4; i < n; i += 2) {
            isPrime[i] = false;
        }
        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> prime;
        prime.push_back(2);
        int count = 1;
        for (int i = 3; i < n; i += 2) {
            if (isPrime[i]) {
                prime.push_back(i);
            }
        }
        int a = -1,b = -1,res = INT_MAX;
        for(int i=0;i<prime.size()-1;i++){
            // cout<<prime[i]<<" "<<prime[i+1]<<endl;
            if((prime[i]>=left && prime[i]<=right) && (prime[i+1]>=left && prime[i+1]<=right) && (res>(prime[i+1]-prime[i]))){
                res = prime[i+1]-prime[i];
                a=prime[i];
                b =prime[i+1];
            }
        }
        return {a,b};
    }
};