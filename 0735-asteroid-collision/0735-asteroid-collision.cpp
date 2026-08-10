class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> v;
        int i=0;
        while(i<ast.size() && ast[i]<0){
            v.push_back(ast[i]);
            i++;
        }
        stack<int> q;
        for(;i<ast.size();i++){
            if(ast[i]<0 && q.empty()){
                v.push_back(ast[i]);
                continue;
            }
            if(ast[i]<0){
                int b = q.top();
                if(abs(b)>abs(ast[i])){
                    continue;
                }
                else if(abs(b)==abs(ast[i])){
                    q.pop();
                }
                else{
                    int b = 1;
                    while(!q.empty() && abs(b)<=abs(ast[i])){
                        q.pop();
                        if(abs(b)==abs(ast[i])) break;
                        if(q.empty()){
                            b= 0;
                            v.push_back(ast[i]);
                            break;
                        }
                        b = q.top();
                    }
                }
            }
            else{
                q.push(ast[i]);
            }
            
        }
        vector<int> temp;
        while(!q.empty()){
            temp.push_back(q.top());
            q.pop();
        }
        for(int j=temp.size()-1;j>=0;j--){
            v.push_back(temp[j]);
        }
        return v;
    }
};