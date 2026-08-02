class Solution {
public:
    int percentageLetter(string s, char letter) {
        int a =0,n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==letter) a++;
        }
        return (a*100)/n;
    }
};