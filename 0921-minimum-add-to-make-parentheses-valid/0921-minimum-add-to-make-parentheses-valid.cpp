class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int res = 0,a = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                a++;
            }
            else if(s[i]==')'){
                if(!st.empty()) st.pop();
                else res++;
                a--;
            }
        }
        if(st.size()!=0) res += st.size();
        return res;
    }
};