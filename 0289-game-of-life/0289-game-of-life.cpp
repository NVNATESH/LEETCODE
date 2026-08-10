class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<pair<int,int>> z,o;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                    int b = 0;
                    if(j>0 && board[i][j-1] == 1) b++;
                    if(j+1<board[i].size() && board[i][j+1] == 1) b++;
                    if(j-1>=0 && i+1<board.size() && board[i+1][j-1] == 1) b++;
                    if(j+1<board[i].size() && i<board.size()-1 && board[i+1][j+1] == 1) b++;
                    if(i<board.size()-1 && board[i+1][j]==1) b++;
                    if(i>0 && board[i-1][j]==1) b++;
                    if(i>0 && j>0 && board[i-1][j-1]==1) b++;
                    if(i>0 && j+1<board[i].size() && board[i-1][j+1]==1) b++;
                    if(b==3 && board[i][j]==0) o.push_back({i,j});
                    if(b<2 && board[i][j]==1) z.push_back({i,j});
                    if(b>=2 && b<=3 && board[i][j]==1) o.push_back({i,j});
                    if(b>3 && board[i][j]==1) z.push_back({i,j});
                    // cout<<b<<endl;
            }            
        }
        for(int i=0;i<o.size();i++) board[o[i].first][o[i].second]= 1;
        for(int i=0;i<z.size();i++) board[z[i].first][z[i].second]= 0;
    }
};