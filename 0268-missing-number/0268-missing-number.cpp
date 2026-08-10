class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long a = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        long long b = (n)*(n+1)/2;

        return (int)b-a;
    }
};