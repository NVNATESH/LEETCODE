class Solution {
public:
    int minOperations(vector<int>& nums) {
        int a = 0,n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) a++;
        }
        if(a>0){
            return n-a;
        }
        int b = 1e7;
        for(int i=0;i<nums.size();i++){
            int c = nums[i];
            for(int j=i+1;j<n;j++){
                c = gcd(c,nums[j]);
                if(c==1){
                    b = min(b,j-i+n-1);
                    break;
                }
            }
        }
        if(b!=1e7) return b;
        return -1;
    }
};