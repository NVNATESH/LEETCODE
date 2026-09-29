class Solution {
public:
    int dp[100][100][200];
    bool solve(int i,int j,int n,int m,int balance,vector<vector<char>>& grid){
        if(i==n-1 && j==m-1){
            balance += grid[i][j]==')' ? -1 : 1;
            return balance == 0;
        }
        if(balance<0) return false;
        if(dp[i][j][balance]!=-1) return dp[i][j][balance];
        int newb;
        bool sub1 = false;
        if(grid[i][j]==')'){
            newb = balance -1;
        }
        else newb = balance +1;
        if(i+1 < n){
            sub1 = sub1 || solve(i+1,j,n,m,newb,grid);
        }
        if(j+1 < m){
            sub1 = sub1 || solve(i,j+1,n,m,newb,grid);
        }
        return dp[i][j][balance] = sub1;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        int n = grid.size(),m = grid[0].size();
        if(grid[0][0]==')' || grid[n-1][m-1]=='(') return false;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,n,m,0,grid);
    }
};