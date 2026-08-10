class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(),n=grid[0].size();
        vector<vector<int>> mat(m,vector<int>(n));
        int total = m*n;
        k %=total;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int a = i*n + j;
                int b = (a+k)%total;
                int c = b/n;
                int d = b%n;
                mat[c][d] = grid[i][j];
            }
        }
        return mat;
    }
};