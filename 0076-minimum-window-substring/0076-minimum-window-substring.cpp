class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> m, n;
        for (int i = 0; i < t.size(); i++) {
            m[t[i]]++;
        }
        int len = 0;
        int a = 0;
        int res = INT_MAX;
        string p = "";
        for (int j = 0; j < s.size(); j++) {
            char c = s[j];
            if (m.find(c) != m.end()) {
                n[c]++;
                if (n[c] <= m[c])
                    len++;
            }
            while (len == t.size()) {
                while (m.find(s[a]) == m.end() || n[s[a]] > m[s[a]]) {
                    n[s[a]]--;
                    a++;
                }
                int b = j - a + 1;
                if (b < res) {
                    res = b;
                    p = s.substr(a, b);
                }
                n[s[a]]--;
                if (n[s[a]] < m[s[a]])
                    len--;
                a++;
            }
        }
        return p;
    }
};