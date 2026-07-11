class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),res = INT_MAX,d = nums[0]+nums[1]+nums[2], t = abs(target-(nums[0]+nums[1]+nums[2]));
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int c = nums[i]+nums[j]+nums[k];
                if(abs(target-c)<t){
                    d = c;
                    t = abs(target-c);
                }
                if(c>target) k--;
                else j++;
            }
        }
        return d;
    }
};