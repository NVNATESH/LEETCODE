class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v(m,string (n,'#'));
        for(int i=0;i<m;i++){
            v[i][0] = '.';
        }
        for(int i=0;i<n;i++){
            v[m-1][i] = '.';
        }
        return v;
    }
};