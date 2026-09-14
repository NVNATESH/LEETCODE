class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
        for(int i=0;i<s.length();i++){
            if((m[s[i]]=='\u0000') || (m[s[i]]==t[i])){
                // m[s[i]] = t[i];
                m[s[i]] =t[i];
            }
            else{
                return false;
            }
        }
        map<char,char> n;
        for(int i=0;i<s.length();i++){
            if((n[t[i]]=='\u0000') || (n[t[i]]==s[i])){
                // m[s[i]] = t[i];
                n[t[i]] =s[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};