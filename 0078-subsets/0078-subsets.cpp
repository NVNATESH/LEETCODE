class Solution {
public:
    set<vector<int>> s;
    void dfs(vector<int> &nums,int i,vector<int> temp,int n){
        if(i==n){
            s.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        dfs(nums,i+1,temp,n);
        temp.pop_back();
        dfs(nums,i+1,temp,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        dfs(nums,0,temp,nums.size());
        vector<vector<int>> v(s.begin(),s.end());
        return v;
    }
};