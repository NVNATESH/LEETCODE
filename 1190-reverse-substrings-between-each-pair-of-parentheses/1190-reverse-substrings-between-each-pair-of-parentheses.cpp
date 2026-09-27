
class Solution {
public:
    string reverseParentheses(string s) {
        vector<string> st;
        string current = "";
        for (char ch : s) {
            if (ch == '(') {
                st.push_back(current);
                current = "";
            } else if (ch == ')') {
                reverse(current.begin(), current.end());
                string previous = st.back();
                st.pop_back();
                current = previous + current;
            } else {
                current += ch;
            }
        }
        return current;
    }
};