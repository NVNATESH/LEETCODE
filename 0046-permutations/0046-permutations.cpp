class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        do{
            vector<int>a(nums.begin(),nums.end());
            v.push_back(a);
        }while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};