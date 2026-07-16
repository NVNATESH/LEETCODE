class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& st, string s) {
        vector<vector<int>> v(n,vector<int> (n,0));
        vector<int> p;
        for(int i=0;i<s.size();i++){
            int j = st[0],k=st[1],l=0,m=0;
            for(int q=i;q<s.size();q++){
                if(s[q]=='R'){
                    if(k<n-1){
                        k++;
                        l++;
                    }
                    else{
                        m = 1;
                        p.push_back(l);
                        break;
                    }
                }
                else if(s[q]=='L'){
                    if(k>=1){
                        k--;
                        l++;
                    }
                    else{
                        m = 1;
                        p.push_back(l);
                        break;
                    }
                }
                else if(s[q]=='D'){
                    if(j<n-1){
                        j++;
                        l++;
                    }
                    else{
                        m = 1;
                        p.push_back(l);
                        break;
                    }
                }
                else if(s[q]=='U'){
                    if(j>=1){
                        j--;
                        l++;
                    }
                    else{
                        m = 1;
                        p.push_back(l);
                        break;
                    }
                }
            }
            if(m==0){
                p.push_back(l);
            }
        }
        return p;
    }
};