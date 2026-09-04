class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        if(n==1 && m==1) return {{0}};
        vector<int> v(n*m),u(n*m),res;
        v[0] = grid[0][0];
        int a = 1,b = n*m-2;
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(i==0 && j==0) continue;
                v[a] = ((v[a-1]%12345)*(grid[i][j]%12345))%12345;
                a++;
            }
        }
        u[n*m-1] = grid[n-1][m-1];
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(i==n-1 && j==m-1) continue;
                u[b] = ((u[b+1]%12345)*(grid[i][j]%12345))%12345;
                b--;
            }
        }
        for(int i=0;i<m*n;i++){
            if(i==0){
                res.push_back(u[i+1]%12345);
            }
            else if(i==n*m-1){
                res.push_back(v[i-1]%12345);
            }
            else{
                res.push_back(((v[i-1]%12345)*(u[i+1]%12345))%12345);
            }
        }
        a = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                grid[i][j] = res[a++];
            }
        }
        return grid;
    }
};