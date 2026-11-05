class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        unordered_map<int,int>mapp;
        for(auto el:nums){
            mapp[el]++;
        }
        for(auto el:mapp){
            if(el.second ==1){
                sum += el.first;
            }
        }
        return sum;
    }
};