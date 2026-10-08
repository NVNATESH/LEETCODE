class Solution {
public:
    string removeOuterParentheses(string s) {
        int i,a = s.size(),b=0,c=0,j=0;
        string ch;
        for(i=0;s[i]!='\0';i++){
        if(s[i]=='(') c++;
        else if(s[i]==')') c--;
        if(c==0){
            for(int k =j+1;k<i;k++){
                ch.push_back(s[k]);
            }
            j=i+1;
        }
    }
       return ch;
    }
};