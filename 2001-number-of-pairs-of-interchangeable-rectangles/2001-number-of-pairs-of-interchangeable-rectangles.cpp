class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        map<double,long long> m;
        long long res = 0;
        for(int i=0;i<rec.size();i++){
            double s = rec[i][0]*1.0/rec[i][1]*1.0;
            m[s]++;
        }
        for(auto x:m){
            if(x.second>1){
                res += (x.second*(x.second-1))/2;
            }
        }
        return res;
    }
};