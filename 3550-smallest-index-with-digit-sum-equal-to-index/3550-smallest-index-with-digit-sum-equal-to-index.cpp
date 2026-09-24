class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int a = 1005,b=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                if(nums[i]==i){
                    return i;
                }
            }
            else{
                int m  = nums[i];
                int s = 0;
                while(m){
                    s += m%10;
                    m /=10;
                }
                if(s==i){
                    return i;
                }
            }
        }
        return -1;
    }
    
};