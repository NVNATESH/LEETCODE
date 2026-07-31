class Solution {
public:
    string findReplaceString(string s, vector<int>& indices,
                             vector<string>& source,
                             vector<string>& targets) {

        vector<int> c(s.size(), 0);

        for(int i = 0; i < indices.size(); i++){

            if(indices[i] + source[i].size() > s.size()){
                indices[i] = -1;
                continue;
            }

            bool ok = true;

            for(int k = 0; k < source[i].size(); k++){
                if(s[indices[i] + k] != source[i][k]){
                    ok = false;
                    break;
                }
            }

            if(!ok){
                indices[i] = -1;
                continue;
            }

            for(int k = 0; k < source[i].size(); k++)
                c[indices[i] + k] = 1;
        }

        vector<string> v(s.size());

        for(int i = 0; i < indices.size(); i++){
            if(indices[i] == -1) continue;

            v[indices[i]] = targets[i];
            c[indices[i]] = 2;
        }

        string t = "";

        for(int i = 0; i < s.size(); i++){
            if(c[i] == 2)
                t += v[i];
            else if(c[i] == 0)
                t += s[i];
        }

        return t;
    }
};