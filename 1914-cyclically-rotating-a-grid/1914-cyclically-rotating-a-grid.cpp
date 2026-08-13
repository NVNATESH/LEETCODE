class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size(),c = grid[0].size();
        int t = min(r,c)/2;
        for(int i=0;i<t;i++){
            vector<int> v;
            int to = i,l = i,bo = r-i-1,r = c - i -1;
            for(int j = l;j<=r;j++){
                v.push_back(grid[to][j]);
            }
            for(int j = to+1;j<=bo-1;j++){
                v.push_back(grid[j][r]);
            }
            for(int j = r;j>=l;j--){
                v.push_back(grid[bo][j]);
            }
            for(int j = bo-1;j>=to+1;j--){
                v.push_back(grid[j][l]);
            }
            int s = v.size();
            int  index = k%s;
            for(int j=l;j<=r;j++){
                grid[to][j] = v[index];
                index = (index+1)%s;
            }
            for(int j = to+1;j<=bo-1;j++){
                grid[j][r] = v[index];
                index = (index+1)%s;
            }
            for(int j = r;j>=l;j--){
                grid[bo][j] = v[index];
                index = (index+1)%s;
            }
            for(int j = bo-1;j>=to;j--){
                grid[j][l] = v[index];
                index = (index+1)%s;
            }
        }
        return grid;
    }
};