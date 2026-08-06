class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<long long,long long> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        if(nums.size()<=1) return nums.size();
        long long res = max(1LL,m[1]%2!=0 ? m[1]:m[1]-1);
        for(auto x: m){
            if(x.first==1 || x.second==0) continue;
            long long b = x.first;
            long long c = x.second<=2 ? x.second : 2;
            long long d = 1LL*b*b;
            if(c==1) continue;
            int f= 0;
            while(m[d]>=2){
                c += 2;
                d *= 1LL*d;
                f = 1;
            }
            if(m[d]==1){
                c++;
                f = 2;
            }
            if(f==1) c--;
            if(f>0) res = max(res,c);
        }
        return res;
    }
};