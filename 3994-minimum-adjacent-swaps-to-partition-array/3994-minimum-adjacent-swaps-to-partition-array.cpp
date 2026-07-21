class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        long long res = 0,mod = 1e9+7,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<a){
                res += cnt1+cnt2;
            }
            else if(nums[i]>=a && nums[i]<=b){
                res += cnt2;
                cnt1++;
            }
            else{
                cnt2++;
            }
        }   
        return (int)(res%mod);
    }
};