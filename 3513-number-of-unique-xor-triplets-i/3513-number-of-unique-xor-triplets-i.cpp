class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int res = 1;
        while(true){
            res *= 2;
            if(nums.size()<res) return res;
        }
        return 0;
    }
};