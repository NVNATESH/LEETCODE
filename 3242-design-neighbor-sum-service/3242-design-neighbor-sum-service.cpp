class NeighborSum {
public:
    map<int,pair<int,int>> m;
    vector<vector<int>> g;
    int n ,mp;
    NeighborSum(vector<vector<int>>& grid) {
        g = grid;
        n = grid.size();
        mp = grid[0].size();
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                m[grid[i][j]] = {i,j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int a = m[value].first;
        int b = m[value].second;
        int res = 0;
        if(b+1<mp) res += g[a][b+1];
        if(b>0) res += g[a][b-1];
        if(a+1<n) res += g[a+1][b];
        if(a>0) res += g[a-1][b];
        return res;
    }
    
    int diagonalSum(int value) {
        int a = m[value].first;
        int b = m[value].second;
        int res = 0;
        for(int i=1;a+i<n && b-i>=0 && i<=1;i++) res += g[a+i][b-i];
        for(int i=1;a+i<n && b+i<mp && i<=1;i++) res += g[a+i][b+i];
        for(int i=1;a-i>=0 && b+i<mp && i<=1;i++) res += g[a-i][b+i];
        for(int i=1;a-i>=0 && b-i>=0 && i<=1 ;i++) res += g[a-i][b-i];
        return res;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */