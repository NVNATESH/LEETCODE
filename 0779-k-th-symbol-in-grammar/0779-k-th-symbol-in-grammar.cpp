class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 && k==1)return 0;
        else if(n==2)
        {
        if(k==1)return 0;
        if(k==2)return 1;
        }
        int p=kthGrammar(n-1,(k+1)/2);
        if(k%2==1)return p;
        return 1-p;
    }
};