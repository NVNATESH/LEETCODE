class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long n = nums.size();
        long long i = 0,j=n-1;
        long long res = 0;
        while(i<j){
            if(nums[i]+nums[j]<=upper){
                res += j-i;
                i++;
            }
            else{
                j--;
            }
        }
        i =0,j=n-1;
        long long c = 0;
        while(i<j){
            if(nums[i]+nums[j]<=(lower-1)){
                c += j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return res-c;
    }
};