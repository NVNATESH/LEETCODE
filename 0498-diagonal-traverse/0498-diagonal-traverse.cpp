class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>> p;
        int n = mat.size(),m= mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                p[i+j].push_back(mat[i][j]);
            }
        }
        int flag = 1;
        vector<int> v;
        for(auto x:p){
            if(flag){
                reverse(x.second.begin(),x.second.end());
                for(int i=0;i<x.second.size();i++){
                    v.push_back(x.second[i]);
                }
                flag = 0;
            }
            else{
                for(int i=0;i<x.second.size();i++){
                    v.push_back(x.second[i]);
                }
                flag = 1;
            }
        }
        return v;
    }
};