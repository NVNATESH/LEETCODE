class Solution {
public:
    int maxDepth(string s) {
        int a=0,b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') b++;
            else if(s[i]==')') b--;
            if(b>a) a = b;
        }
        return a;
    }
};