class Solution {
public:
    vector<long long> distance(vector<int>& arr) {
        unordered_map<int,vector<long long>> m;
        for(int i=0;i<arr.size();i++){
            if(m[arr[i]].size()==0){
                m[arr[i]] = vector<long long>(4,0);
                m[arr[i]][1] += i;
                m[arr[i]][3]++;
            }
            else{
                m[arr[i]][1] += i;
                m[arr[i]][3]++;
            }
        }
        vector<long long> v;
        for(int i=0;i<arr.size();i++){
            long long a = i;
            m[arr[i]][1] -=i;
            m[arr[i]][3]--;
            long long b = a*m[arr[i]][2] - m[arr[i]][0] + m[arr[i]][1] - a*m[arr[i]][3];
            m[arr[i]][0] += i;
            m[arr[i]][2]++;
            v.push_back(b);
        }
        return v;
    }
};