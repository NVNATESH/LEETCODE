class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        vector<int> v(n+1,0);
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]]++;
            v[edges[i][1]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==n-1) return i;
        }
        return -1;
    }
};