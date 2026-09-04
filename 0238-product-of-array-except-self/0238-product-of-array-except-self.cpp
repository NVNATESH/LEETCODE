class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        if(nums.size()==1) return {0};
        int n = nums.size();
        vector<int> pref(n),suff(n),res;
        pref[0] = nums[0];
        suff[n-1] = nums[n-1];
        for(int i=1;i<n;i++){
            pref[i] = pref[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1]*nums[i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                res.push_back(suff[i+1]);
            }
            else if(i==n-1){
                res.push_back(pref[i-1]);
            }
            else{
                res.push_back(pref[i-1]*suff[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<pref[i]<<" "<<suff[i]<<endl;
        }
        return res;
    }
};