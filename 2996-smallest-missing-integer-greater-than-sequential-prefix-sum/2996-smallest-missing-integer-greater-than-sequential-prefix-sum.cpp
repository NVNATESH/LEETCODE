class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int>m;
        for(int i=0;i<nums.size();i++){
            m.insert(nums[i]);
        }
        int b=nums[0];
        for(int i=1;i<nums.size();i++){
           if(nums[i]==(nums[i-1]+1)){
            b+=nums[i];
           }
           else break;
        }
        while(m.count(b)){
            b++;
        }
        return b;
    }
};