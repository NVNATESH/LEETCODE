class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long a =0;
        for(int i=0;i<nums.size();i++){
            a ^=nums[i];
        }
        long long b = a & (-a);
        long long c = 0,d =0;
        for(int i=0;i<nums.size();i++){
            if(b&nums[i]){
                c ^=nums[i];
            }
            else{
                d ^=nums[i];
            }
        }
        return {(int)c,(int)d};
    }
};