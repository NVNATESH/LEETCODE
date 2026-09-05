class Solution {
public:
    unordered_map<string,vector<int>> res;
    vector<int> diffWaysToCompute(string expression) {
        if(res.count(expression)){
            return res[expression];
        }
        vector<int> result;
        for(int i=0;i<expression.size();i++){
            char ch = expression[i];
            if(ch=='+' || ch=='-' || ch=='*'){
                vector<int> ls = diffWaysToCompute(expression.substr(0,i));
                vector<int> rs = diffWaysToCompute(expression.substr(i+1));
                for(int x:ls){
                    for(int y:rs){
                        if(ch=='+'){
                            result.push_back(x+y);
                        }
                        else if(ch=='-'){
                            result.push_back(x-y);
                        }
                        else{
                            result.push_back(x*y);
                        }
                    }
                }
            }
        }
        if(result.empty()){
            result.push_back(stoi(expression));
        }
        return res[expression] = result;
    }
};