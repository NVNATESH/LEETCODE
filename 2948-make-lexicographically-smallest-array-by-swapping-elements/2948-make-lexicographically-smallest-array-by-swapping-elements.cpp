class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        vector<pair<int,vector<int>>> s(m.begin(),m.end());
        for(int i=0;i<s.size()-1;i++){
            int j = i;
            while (j + 1 < s.size() &&
                   s[j + 1].first - s[j].first <= limit) {
                j++;
            }
            vector<int> val;
            vector<int> ind;
            for (int k = i; k <= j; k++) {
                for (int idx : s[k].second) {
                    val.push_back(s[k].first);
                    ind.push_back(idx);
                }
            }
            sort(ind.begin(), ind.end());
            for (int k = 0; k < val.size(); k++) {
                nums[ind[k]] = val[k];
            }
            i = j;
        }
        return nums;

    }
};