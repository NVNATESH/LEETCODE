class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1,l=n-1;
                while(k<l){
                    long long b = 1LL*nums[i]+nums[j]+nums[k]+nums[l];
                    vector<int> a;
                    if(b==target){
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[k]);
                        a.push_back(nums[l]);
                        v.push_back(a);
                        l--;
                        k++;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(b>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        return v;
    }
};