class Solution {
public:
    void solve(vector<int> c,int t,int s,vector<vector<int>>& res,vector<int> &v,int j){
        if(s==t){
            res.push_back(v);
            return;
        }
        if(s>t) return;
        for(int i=j;i<c.size();i++){
            v.push_back(c[i]);
            solve(c,t,s+c[i],res,v,i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;
        solve(candidates,target,0,res,v,0);
        return res;
    }
};