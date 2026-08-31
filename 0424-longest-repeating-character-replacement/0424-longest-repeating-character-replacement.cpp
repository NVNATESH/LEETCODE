class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int j = 0,m = 0,res = 0;
        for(int i = 0;i<s.size();i++){
            v[s[i]-'A']++;
            m = max(m,v[s[i]-'A']);
            while((i-j+1)-m > k){
                v[s[j]-'A']--;
                j++;
            }
            res = max(res,i-j+1);
        }
        return res;
    }
};