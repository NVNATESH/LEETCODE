class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int i = 0,j=1;
        int res = 1;
        set<char> p;
        p.insert(s[0]);
        while(i<j && j<s.length()){
            if(p.count(s[j])==0){
                p.insert(s[j]);
            }
            else{
                while(s[j]!=s[i]){
                    p.erase(s[i]);
                    i++;
                }
                i++;
            }
            j++;
            res = max(res,(int)p.size());
        }
        return res;
    }
};