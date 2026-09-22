class Solution {
public:
    char solve(string s,int k){
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s.size()>=k){
            return s[k-1];
            }
            if(s[i]=='z'){
                s += 'a';
            }
            else{
                s += s[i]+1;
            }
        }
        return solve(s,k);
    }
    char kthCharacter(int k) {
        string s = "a";
        return solve(s,k);
    }
};