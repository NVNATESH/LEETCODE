class Solution {
public:
    bool checkValidString(string s) {
        priority_queue<pair<int,int>,vector<pair<int,int>>> pq;
        set<pair<int,int>> vist;
        if(s[0]==')' || s[s.size()-1]=='(') return false;
        if(s[0]=='(') {
            pq.push({1,1});
            vist.insert({1,1});
        }
        else if(s[0]=='*'){
            pq.push({1,0});
            pq.push({1,1});
            vist.insert({1,0});
            vist.insert({1,1});
        }
        while(!pq.empty()){
            int a = pq.top().first;
            int b = pq.top().second;
            pq.pop();
            int i = a;
            for(i;i<s.size() && b>=0;i++){
                if(s[i]=='('){
                    b++;
                }
                else if(s[i]==')'){
                    b--;
                }
                else{
                    if(!vist.count({i+1,b})){
                        pq.push({i+1,b});
                        vist.insert({i+1,b});
                    }
                    if(!vist.count({i+1,b+1})){
                        pq.push({i+1,b+1});
                        vist.insert({i+1,b+1});
                    }
                    if(b>0 && !vist.count({i+1,b-1})){
                        pq.push({i+1,b-1});
                        vist.insert({i+1,b-1});
                    }
                    break;
                }
            }
            if(i==s.size() && b==0) return true;
        }
        return false;
    }
};