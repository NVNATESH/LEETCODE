class Solution {
public:
    bool solve(int i,int j,string& s,string& p,vector<vector<int>>& v){
        if(j==p.size()) return i==s.size();
        if(v[i][j]!=-1) return v[i][j];
        bool st = (i<s.size() && (s[i]==p[j] || p[j]=='.'));
        if(j+1<p.size() && p[j+1]=='*'){
            return v[i][j] =  solve(i,j+2,s,p,v) || (st && solve(i+1,j,s,p,v));
        }
        return v[i][j] = st && solve(i+1,j+1,s,p,v);
    }
    bool isMatch(string s, string p) {
        vector<vector<int>> v(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(0,0,s,p,v);
    }
};