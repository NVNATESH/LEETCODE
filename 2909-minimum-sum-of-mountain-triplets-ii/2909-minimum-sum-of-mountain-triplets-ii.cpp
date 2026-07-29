class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size(), res=INT_MAX;
        vector<int> p(n), s(n);

        p[0]=nums[0];
        s[n-1]=nums[n-1];
        
        for(int i=1 ; i<n ; ++i) {
            p[i]=min(p[i-1],nums[i]);
        }

        for(int i=n-2 ; i>=0 ; --i) {
            s[i]=min(s[i+1],nums[i]);
        }

        for(int i=1 ; i<n-1 ; ++i) {
            if(p[i-1]<nums[i] && s[i+1]<nums[i]) {
                res=min(res,p[i-1]+nums[i]+s[i+1]);
            }
        }

        return res==INT_MAX ? -1 : res;
    }
};