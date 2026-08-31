class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()<=2) return  nums.size();
        int a = -1,b = -1,c = INT_MAX,d = INT_MIN,n = nums.size();
        for(int i=0;i<n;i++){
            if(c>nums[i]){
                c = nums[i];
                a = i+1;
            }
            if(d<nums[i]){
                d = nums[i];
                b = i+1;
            }
        }
        int e = max(a,b);
        int f = min(a,b);
        // cout<<e<<" "<<f<<endl;
        int res = min({e,n-f+1,f+n-e+1});
        // cout<<e<<n-f<<f+n-e<<endl;
        return res;
    }
};