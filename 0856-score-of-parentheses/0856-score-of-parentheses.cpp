class Solution {
public:
    int scoreOfParentheses(string s) {
        int a = 0,b=0,sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a++;
            }
            else{
                a--;
                if(s[i-1]=='(') sum+=pow(2,a);
            }
            cout<<a<<" "<<sum<<" "<<s[i]<<endl;
        }
        return sum;
    }
};