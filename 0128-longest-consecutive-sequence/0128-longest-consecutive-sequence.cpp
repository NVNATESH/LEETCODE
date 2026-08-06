class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        map<long long,long long> m;
        for(auto x:nums){
            m[x]++;
        }
        vector<pair<long long,long long>> v(m.begin(),m.end());
        long long a = v[0].first;
        long long res=0;
        for(int i=1;i<v.size();i++){
            long long b = 0;
            while(i<v.size() && a+1==v[i].first){
                b++;
                a++;
                i++;
            }
            res = max(b,res);
            a = v[i].first;
        }
        return res+1;
    }
};