class Solution {
public:
    void lower_sire(vector<int>& spf,vector<int>& pri){
        int n = spf.size();
        for(int i=2;i<n;i++){
            if(spf[i]==0){
                spf[i] = i;
                pri.push_back(i);
            }
            for(int j=0;j<pri.size() && pri[j]*i<n;j++){
                spf[pri[j]*i] = pri[j];
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int m = *max_element(nums.begin(),nums.end());
        vector<int> spf(m+1,0);
        vector<int> pri;
        lower_sire(spf,pri);
        int res = 0;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            for(int j = 0;j<pri.size() && nums[i]>=pri[j];j++){
                if(nums[i]%pri[j]==0) s.insert(pri[j]);
            }
        }
        return s.size();
    }
};