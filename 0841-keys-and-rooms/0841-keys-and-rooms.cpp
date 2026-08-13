class Solution {
public:
    void dfs(vector<vector<int>>& r, vector<bool>& v,int src){
        v[src] = true;
        for(int a:r[src]){
            if(!v[a]){
                dfs(r,v,a);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> v(n,false);
        dfs(rooms,v,0);
        for(int i=0;i<v.size();i++){
            if(v[i]==false) return false;
        }
        return true;
    }
};