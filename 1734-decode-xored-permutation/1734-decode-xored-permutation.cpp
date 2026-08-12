class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int n = encoded.size()+1;
        int s = 0,a = 0;
        for(int i=1;i<=n;i++){
            s ^= i;
        }
        for(int i=1;i<n-1;i+=2){
            a ^= encoded[i];
        }
        vector<int> ans(n);
        ans[0] = s^a;
        for(int i=0;i<encoded.size();i++){
            ans[i+1] =ans[i]^encoded[i];
        }
        return ans;
    }
};