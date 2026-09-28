class Solution {
public:
    void p(int n,int left,int right,vector<string>&ans,string &temp){
        if(left+right==2*n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            temp.push_back('(');
            p(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        if(right<left){
            temp.push_back(')');
            p(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        p(n,0,0,ans,temp);
        return ans;
    }
};