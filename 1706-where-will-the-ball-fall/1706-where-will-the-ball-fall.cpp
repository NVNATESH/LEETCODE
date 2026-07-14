class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> v;
        for(int i=0;i<grid[0].size();i++){
            int j = 0,k=i;
            if(i==0 && grid[0][0]==-1){
                v.push_back(-1);
                continue;
            }
            if(i==grid[0].size()-1 && grid[0][grid[0].size()-1]==1){
                v.push_back(-1);
                continue;
            }
            while(j<grid.size()){
               if(grid[j][k]==1){
                if(k<grid[0].size()-1 && grid[j][k]==grid[j][k+1]){
                    j++;
                    k++;
                }
                else{
                    k=-1;
                    break;
                }
               }
               else{
                if(k>0 && grid[j][k]==grid[j][k-1]){
                    j++;
                    k--;
                }
                else{
                    k=-1;
                    break;
                }
               }
            }
            v.push_back(k);
        }
        return v;   
    }
};