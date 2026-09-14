class Solution {
public:
    void reve(vector<char>& v,int s,int e){
        if(s>=e) return;
        swap(v[s],v[e]);
        reve(v,s+1,e-1);
    }
    void reverseString(vector<char>& s) {
        reve(s,0,s.size()-1);
    }
};