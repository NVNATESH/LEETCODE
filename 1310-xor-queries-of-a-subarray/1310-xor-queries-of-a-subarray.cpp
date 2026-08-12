class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size(),m = queries.size();
        vector<int> v(n,0),res;
        if(arr.size()==0) return res;
        v[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            v[i] = v[i-1]^arr[i];
        }
        for(int i=0;i<m;i++){
            if(queries[i][0]==queries[i][1]) res.push_back(arr[queries[i][0]]);
            else if(queries[i][0]==0) res.push_back(v[queries[i][1]]);
            else{
                int a = v[queries[i][1]]^v[queries[i][0]-1];
                res.push_back(a);
            }
        }
        return res;
    }
};