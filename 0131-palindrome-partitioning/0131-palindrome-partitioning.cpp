class Solution {
public:
    bool ispl(string s){
        int t = s.size()-1,i = 0;
        while(i<t){
            if(s[i]!=s[t]) return false;
            i++;
            t--;
        }
        return true;
    }
    void solve(string s,string t, int i,vector<vector<string>>& res,vector<string> v){
        if(i==s.size() && t.size()==0){
            res.push_back(v);
            return;
        }
        if(i==s.size()) return;
        if(ispl(t+s[i])){
            v.push_back(t+s[i]);
            solve(s,"",i+1,res,v);
            v.pop_back();
        }
        solve(s,t+s[i],i+1,res,v);
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> v;
        string t;
        solve(s,t,0,res,v);
        return res;
    }
};