class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && st.top().first == s[i]) {
                st.top().second++;
                if(st.top().second == k) {
                    st.pop();
                }
            }
            else {
                st.push({s[i], 1});
            }
        }
        string res = "";
        while(!st.empty()) {
            char c = st.top().first;
            int a = st.top().second;
            st.pop();
            for(int j = 0; j < a; j++) {
                res += c;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};