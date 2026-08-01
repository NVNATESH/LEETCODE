class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> v(n+1,0);
        for(int i=0;i<queries.size();i++){
            v[queries[i][0]]++;
            if(queries[i][1]+1<=n) v[queries[i][1]+1]--;
        }
        int a = 0;
        for(int i=0;i<n;i++){
           a+=v[i];
           if(a<nums[i]) return false;
        }
        return true;
    }
};