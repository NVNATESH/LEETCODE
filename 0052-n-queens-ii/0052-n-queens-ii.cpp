class Solution {
public:
    bool valid(int a,int b,int n,vector<string> res){
        for(int i = a-1;i>=0;i--){
            if(res[i][b]=='Q') return false;
        }
        for(int i=a-1,j=b-1;i>=0 && j>=0;i--,j--){
            if(res[i][j]=='Q') return false;
        }
        for(int i=a-1,j=b+1;i>=0 && j<n;j++,i--){
            if(res[i][j]=='Q') return false;
        }
        return true;
    }
    void solve(int n,int j,int a,vector<vector<string>>& res,vector<string> v){
        if(j==n){
            res.push_back(v);
            return;
        }
        for(int col = 0;col<n;col++){
            if(valid(j,col,n,v)){
                v[j][col] = 'Q';
                solve(n,j+1,a+1,res,v);
                v[j][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<string>> res;
        vector<string> v(n,string(n,'.'));
        solve(n,0,0,res,v);
        return res.size();
    }
};