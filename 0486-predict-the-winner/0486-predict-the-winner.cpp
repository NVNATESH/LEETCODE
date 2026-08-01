class Solution {
public:
    int test = 0;
    bool recursion(vector<int>&nums,int i,int j,long long a,long long b,bool check){
        if(i>j){
            if(a>=b){
                return true;
            }
            return false;
        }
        if(check){
            return recursion(nums,i+1,j,a+nums[i],b,false) || recursion(nums,i,j-1,a+nums[j],b,false);
        }
        else{
            return recursion(nums,i+1,j,a,b+nums[i],true) && recursion(nums,i,j-1,a,b+nums[j],true);
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        return recursion(nums,0,nums.size()-1,0,0,true);
    }
};