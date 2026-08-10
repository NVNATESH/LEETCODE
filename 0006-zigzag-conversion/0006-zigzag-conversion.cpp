class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> v(n);
        int a = s.length(),k=0;
        for(int i=0;i<n;i++){
            if(k==a) break;
            v[i].push_back(s[k++]);
            if(i==(n-1)){
                for( i=i-1;i>=0;i--){
                    if(k==a) break;
                    v[i].push_back(s[k++]);
                }
                i=0;
            }
        }
        string r;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                r +=v[i][j];
            }
        }
        return r;
    }
};