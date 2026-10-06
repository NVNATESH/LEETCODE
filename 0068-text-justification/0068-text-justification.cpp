class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxi) {
        vector<string> v;
        int i=0;
        while(i<words.size()){
            string t = words[i],y;
            int a = words[i].size();
            vector<string> g;
            g.push_back(words[i]);
            while(i+1<words.size() && a+words[i+1].size()+g.size() <= maxi){
                a += words[i+1].size();
                g.push_back(words[i+1]);
                i++;
            }
            if(i==words.size()-1){
                for(int j=0;j<g.size();j++){
                    y += g[j];
                    if(maxi-y.size()>0) y += " ";
                }
                while(y.size()!=maxi){
                    y += " ";
                }
                v.push_back(y);
                break;
            }
            if(g.size()==1){
                while(t.size()!=maxi){
                    t += " ";
                }
                v.push_back(t);
                i++;
                continue;
            }
            int e = (maxi - a)/(g.size()-1);
            int d = (maxi - a)%(g.size()-1);
            for(int j=0;j<g.size();j++){
                y += g[j];
                if(j==g.size()-1) continue;
                if(d>0) {
                    y += " ";
                    d--;
                }
                for(int k=0;k<e;k++) y+= " ";
            }
            v.push_back(y);
            i++;
        }
        return v;
    }
};