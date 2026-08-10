class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int target =0;
        for(int i=0;i<nums.size();i++){
            target |= nums[i];
        }
        cout<<target<<endl;
        target = target <<(nums.size()-1);
        return target;
    }
};