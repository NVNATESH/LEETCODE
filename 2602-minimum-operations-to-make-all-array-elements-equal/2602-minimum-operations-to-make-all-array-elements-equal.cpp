class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        long long n = nums.size();
        vector<long long> v(n,0),res;
        v[0] = nums[0];
        for(int i=1;i<n;i++){
            v[i] = v[i-1] + nums[i];
        }
        for(int q:queries){
            auto a = lower_bound(nums.begin(),nums.end(),q)-nums.begin();
            long long l = (long long) q*a-(a>0 ? v[a-1] : 0);
            long long r = (v[n-1] - (a>0 ? v[a-1] : 0)) - (long long) q*(n-a);
            res.push_back(l+r);
        }
        return res;
    }
};