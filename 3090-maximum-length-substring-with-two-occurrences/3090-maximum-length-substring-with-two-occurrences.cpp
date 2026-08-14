class Solution {
public:
    int maximumLengthSubstring(string nums) {
        unordered_map<char,int> m;
        int a = 0,res = 0,j=0;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]==2){
                do{
                    m[nums[j]]--;
                    j++;
                    a--;
                }while(nums[j-1]!=nums[i]);
            }
            m[nums[i]]++;
            a++;
            res = max(res,a);
        }
        return res;
    }
};