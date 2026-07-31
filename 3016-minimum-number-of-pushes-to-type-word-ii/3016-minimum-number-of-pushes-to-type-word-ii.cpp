class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>m;
        for(int i=0;i<word.size();i++){
            m[word[i]]++;
        }
        vector<int> v;
        for(auto x:m){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end(),[](int a,int b){return a>b;});
        int b = 0;
        for(int i=0;i<v.size();i++){
            int c = (i/8)+1;
            b += c * v[i];
        }
        return b;
    }
};