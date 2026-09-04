class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int a = -1,n = nums.size();
        vector<int> suf(n,INT_MAX);
        suf[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i] = min(suf[i+1],nums[i]);
        }
        int b = 0;
        for(int i=0;i<n;i++){
            b = max(b,nums[i]);
            if(b-suf[i] <= k) return i;
        }
        return -1;
    }
};