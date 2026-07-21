class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>m;
        for( char i :t){
            m[i]++;
        }
        int l=0;
        int ma = INT_MAX;
        int cnt=0;
        int k=0;
        for( int r=0;r<s.size();r++){
                if( m[s[r]]>0) cnt++;
                m[s[r]]--;
                while(cnt == t.size()){
                    if( r-l+1 < ma){
                        ma = r-l+1;
                        k=l;
                    }
                    m[s[l]]++;
                    if( m[s[l]]>0)cnt--;
                    l++;
                }
        }
        if( ma ==INT_MAX) return "";
        return s.substr(k,ma);
    }
};