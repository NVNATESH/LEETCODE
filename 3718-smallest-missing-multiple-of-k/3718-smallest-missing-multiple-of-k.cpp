class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> v(101,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]] = 1;
        }
        int i;
        for(i=k;i<101;i+=k){
            if(v[i]==0) return i;
        }
        return i;
    }
};