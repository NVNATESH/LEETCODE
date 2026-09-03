class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a = 0;
            for(int j=i+1;j<n;j++){
                if((nums[i]&1) != (nums[j]&1)) a++;
            }
            v.push_back(a);
        }
        return v;
    }
};