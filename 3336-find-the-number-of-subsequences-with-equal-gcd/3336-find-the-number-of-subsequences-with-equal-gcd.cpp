class Solution {
public:
    int arr[201][201][201];
    int mod = 1e9+7;
    int rec(vector<int> &nums,int i,int gcd1,int gcd2){
        long long ans = 0;
        if(i==nums.size()){
            if(gcd1>0 && gcd1==gcd2){
                return 1;
            }
            return 0;
        }
        if(arr[i][gcd1][gcd2]!=-1) return arr[i][gcd1][gcd2];
        ans += (1LL*rec(nums,i+1,gcd1,gcd2))%mod;
        ans += (1LL*rec(nums,i+1,gcd(nums[i],gcd1),gcd2))%mod;
        ans += (1LL*rec(nums,i+1,gcd1,gcd(nums[i],gcd2)))%mod;
        return arr[i][gcd1][gcd2] = ans%mod;
    }
    int subsequencePairCount(vector<int>& nums) {
        memset(arr,-1,sizeof(arr));
        return rec(nums,0,0,0);
    }
};