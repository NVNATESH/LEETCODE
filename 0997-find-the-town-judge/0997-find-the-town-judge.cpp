class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n<=1) return 1;
        vector<vector<int>> v(n+1),u(n+1);
        for(int i=0;i<trust.size();i++){
            v[trust[i][0]].push_back(trust[i][1]);
            u[trust[i][1]].push_back(trust[i][0]);
        }
        for(int i=0;i<v.size();i++){
            if(v[i].size()==0 && u[i].size()==n-1) return i;
            // cout<<v[i].size()<<" "<<u[i].size()<<endl;
        }
        return -1;
    }
};