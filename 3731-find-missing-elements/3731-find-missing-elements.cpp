class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max = 0,min= INT_MAX,n= nums.size();
        vector<int> v(101,0);
        vector<int> u;
        for(int i=0;i<n;i++){
            v[nums[i]]++;
            if(nums[i]<min){
                min = nums[i];
            }
            if(max<nums[i]){
                max = nums[i];
            }
        }
        for(int i=min;i<=max;i++){
            if(v[i]==0){
                u.push_back(i);
            }
        }
        return u;
    }
};