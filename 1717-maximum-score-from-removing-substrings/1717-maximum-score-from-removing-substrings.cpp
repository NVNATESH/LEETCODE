class Solution {
public:
    pair<string,int> remov(string s,string st,int x){
        string sta;
        int total = 0;
        for(char ch:s){
            if(!sta.empty() && sta.back()==st[0] && ch==st[1]){
                sta.pop_back();
                total += x;
            }
            else{
                sta.push_back(ch);
            }
        }
        return {sta,total};
    }
    int maximumGain(string s, int x, int y) {
        vector<string> v;
        for(int i=0;i<s.size();i++){
            string t = "";
            if(s[i]=='a' || s[i]=='b'){
                while(s[i]=='a' || s[i]=='b'){
                    t += s[i];
                    i++;
                }
                v.push_back(t);
            }
        }
        int scr = 0;
        for(int i=0;i<v.size();i++){
            if(x>y){
                auto sc = remov(v[i],"ab",x);
                scr += sc.second;
                auto sr = remov(sc.first,"ba",y);
                scr += sr.second;
            }
            else{
                auto sc = remov(v[i],"ba",y);
                scr += sc.second;
                auto sr = remov(sc.first,"ab",x);
                scr += sr.second;
            }
        }
        return scr;
    }
};