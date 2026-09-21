class Solution {
public:
    set<string> s;
    int dfs(vector<int> v){
       int t = 0;
       for(int i=0;i<26;i++){
        if(v[i]){
            t++;
            v[i]--;
            t += dfs(v);
            v[i]++;
        }
       }
       return t; 
    }
    int numTilePossibilities(string tiles) {
        vector<int> v(26,0);
        for(int i=0;i<tiles.size();i++){
            v[tiles[i]-'A']++;
        }
        return dfs(v);
    }
};