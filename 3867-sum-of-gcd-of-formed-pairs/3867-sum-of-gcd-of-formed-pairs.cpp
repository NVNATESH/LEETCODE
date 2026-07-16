class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int a = nums[0];
        vector<long long> v;
        for(int i=0;i<nums.size();i++){
            a = max(nums[i],a);
            long long c = gcd(a,nums[i]);
            v.push_back(c);
        }
        long long res = 0,i=0,j=v.size()-1;
        sort(v.begin(),v.end());
        while(i<j){
            cout<<v[i]<<v[j]<<endl;
            res += gcd(v[i],v[j]);
            i++;
            j--;
        }
        return res;
    }
};