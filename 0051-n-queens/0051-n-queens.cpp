class Solution {
public:
vector<vector<string>>ans;
    bool issafe(vector<string> v,int a,int b,int n){
        for(int i=a-1;i>=0;i--){
            if(v[i][b]=='Q') return false;
        }
        for(int i=a-1,j=b-1;i>=0 && j>=0;i--,j--){
            if(v[i][j]=='Q') return false;
        }
        for(int i=a-1,j=b+1;i>=0 && j<n;i--,j++){
            if(v[i][j]=='Q') return false;
        }
        return true;
    }
    void solve(int row,int n, vector<string> v){
        if(row==n) {
            ans.push_back(v);
            return;
        }
        for(int col=0;col<n;col++){
            if(issafe(v,row,col,n)){
                v[row][col] =  'Q';
                solve(row+1,n,v);
                v[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> v(n,string(n,'.'));
        solve(0,n,v);
        return ans;
    }
};