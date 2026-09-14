class Solution {
public:
    vector<vector<int>> res;
    void check(vector<int> r,int n,int k ,int j){
        if(r.size()==k){
            res.push_back(r);
            return ;
        }
        for(int i=j;i<=n;i++){
        r.push_back(i);
        check(r,n,k,i+1);
        r.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> r;
        check(r,n,k,1);
        return res;
    }
};