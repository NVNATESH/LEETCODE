class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto it = m.begin();it != m.end();it++){
            int a = it->first,b = it->second;
            if(b>0){
                int c = 0;
                for(int j = 0;j<k;j++){
                    int cur = a + j;
                    if(m[cur]<b) return false;
                    if(m[cur]>b) c=j;
                    m[cur] -= b;
                }
            }
        }
        return true;
    }
};