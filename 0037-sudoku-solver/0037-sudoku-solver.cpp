class Solution {
public:
    bool isv(vector<vector<char>>& board,int i,int j,int k){
        for(int h=0;h<9;h++){
            if(board[i][h]=='0'+k) return false;
            if(board[h][j]=='0'+k) return false;
        }
        int h1 = (i/3)*3;
        int l1 = (j/3)*3;
        for(int h=h1;h<h1+3;h++){
            for(int l=l1;l<l1+3;l++){
                if(board[h][l]=='0'+k) return false;
            }
        }
        return true;
    }
    bool dfs(vector<vector<char>>& board,int i,int j){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]!='.') continue;
                    for(int k=1;k<=9;k++){
                        if(isv(board,i,j,k)){
                            board[i][j] = '0'+k;
                            if(dfs(board,i,j)) return true;
                            board[i][j] = '.';
                        }
                    }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        dfs(board,0,0);
    }
};