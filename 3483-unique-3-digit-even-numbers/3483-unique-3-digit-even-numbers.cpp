class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> uniquedigits;
        int a = digits.size();
        for(int i=0;i<a;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<a;j++){
                if(j==i) continue;
                for(int k=0;k<a;k++){
                    if(k==i || k==j || digits[k]%2!=0) continue;
                    int num = digits[i]*100 + digits[j]*10+digits[k];
                    uniquedigits.insert(num);
                }
            }
        }
        return uniquedigits.size();
    }
};