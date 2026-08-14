class Solution {
public:
    int res = 0;
    void dfs(vector<vector<int>>& is,vector<bool>& v,int s){
        v[s] = true;
        for(int i=0;i<is[s].size();i++){
            if(is[s][i]==1 && v[i]!=true) {
                v[i] = true;
                dfs(is,v,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> v(n,false);
        for(int i=0;i<n;i++){
            if(!v[i]){
                res++;
                dfs(isConnected,v,i);
            }
        }
        return res;
    }
};