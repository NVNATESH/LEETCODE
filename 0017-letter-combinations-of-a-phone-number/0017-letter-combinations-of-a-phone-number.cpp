class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<vector<char>> a(n);
        for(int i=0;i<digits.size();i++){
            vector<char> v;
            for(int j=0;j<3;j++){
                int d = digits[i]-'2',a = 0;
                if(d>=6) a= 1;
                char e = 'a'+3*d+j+a;
                v.push_back(e);
            }
            if(digits[i]=='7') v.push_back('s');
            if(digits[i]=='9') v.push_back('z');
            a[i] = v;
        }
        vector<string> res;
        if(n==1){
            for(int i=0;i<a[0].size();i++){
                string s = "";
                s+=a[0][i];
                res.push_back(s);
            }}
        if(n==2){
        for(int i=0;i<a[0].size();i++){
            string s = "";
            s+=a[0][i];
            for(int j=0;j<a[1].size();j++){
                res.push_back(s+a[1][j]);
            }}}
        if(n==3){
            for(int i=0;i<a[0].size();i++){
            string s = "";
            s+=a[0][i];
            for(int j=0;j<a[1].size();j++){
                for(int k = 0;k<a[2].size();k++){
                res.push_back(s+a[1][j]+a[2][k]);
                }}}}
        if(n==4){
            for(int i=0;i<a[0].size();i++){
            string s = "";
            s+=a[0][i];
            for(int j=0;j<a[1].size();j++){
                for(int k = 0;k<a[2].size();k++){
                    for(int l=0;l<a[3].size();l++){
                res.push_back(s+a[1][j]+a[2][k]+a[3][l]);
                    }}}}}
        return res;
    }
};