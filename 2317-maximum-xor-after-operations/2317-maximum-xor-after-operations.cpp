class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) continue;
            res = max(res,32-__builtin_clz(nums[i]));
        }
        // cout<<res<<endl;
        int ans = 0;
        for(int i=0;i<res;i++){
            for(int j=0;j<nums.size();j++){
                int b = (nums[j]>>i) & 1;
                // cout<<b<<" "<<i<<endl;
                if(b==1){
                    int d = 1<<i;
                    ans = ans | d;
                }
            }
        }
        return ans;
    }
};