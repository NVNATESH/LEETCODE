class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = 0;
        for(int i=0;i<nums.size();i++){
        int d = nums[i] < nums[i+1] ? nums[i] : nums[i+1];
        a = a + d;
        i++;
    }
    return a;
    }
};