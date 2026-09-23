class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        vector<int> pref,suff,p,s;
        long long a = 0,b = 0,n = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            a+= nums[i];
            b+= nums[n-i];
            if(a<=x) {
                pref.push_back(a);
                p.push_back(i);
            }
            if(b<=x) {
                suff.push_back(b);
                s.push_back(i);
            }
            if(a>x && b>x) break;
        }
        int  it1 = lower_bound(pref.begin(),pref.end(),x)-pref.begin();
        int  it2 = lower_bound(suff.begin(),suff.end(),x)-suff.begin();
        int res = INT_MAX;
        if(it1 != pref.size() && pref[it1]==x) res = min(res,it1+1);
        if(it2 != suff.size() && suff[it2]==x) res = min(res,it2+1);
        for(int i=0;i<pref.size();i++){
            int b = x - pref[i];
            if(b<0) break;
            int it2 = lower_bound(suff.begin(),suff.end(),b)-suff.begin();
            if(it2==suff.size()) continue;
            if(p[i]<n-s[it2] && suff[it2]==b) res = min(res,i+it2+2);
        }
        return res==INT_MAX ? -1 : res;
    }
};