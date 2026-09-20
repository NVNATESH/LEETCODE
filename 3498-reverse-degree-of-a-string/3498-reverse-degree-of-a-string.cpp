class Solution {
public:
    int reverseDegree(string s) {
        char ch = 'z'+1;
    int ans=0,b=0;
    for(int i=0;s[i]!='\0';i++){
        ans = ans + ((ch - s[i])*(i+1));
        //printf("%d\n",ans);
    }
    return ans;
    }
};