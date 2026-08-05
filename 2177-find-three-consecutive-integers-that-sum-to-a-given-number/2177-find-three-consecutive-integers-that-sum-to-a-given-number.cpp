class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> res;
        if(num%3!=0){
            return res;
        }
        else{
            long long a = num/3;
            res.push_back(a-1);
            res.push_back(a);
            res.push_back(a+1);
        }
        return res;
    }
};