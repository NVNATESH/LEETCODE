class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<reward1.size();i++){
            v.push_back({reward1[i]-reward2[i],i});
        }
        sort(v.rbegin(),v.rend(),[](auto& a,auto& b){
            if(a.first==b.first){
                return a.second > b.second;
            }
            return a.first<b.first;
        });
        long long res = 0;
        for(int i=0;i<reward1.size();i++){
            if(i<k){
                res += reward1[v[i].second];
            }
            else{
                res += reward2[v[i].second];
            }
        }
        return res;
    }
};