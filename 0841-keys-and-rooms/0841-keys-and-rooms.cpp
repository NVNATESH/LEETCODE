class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> v(n);
        stack<int> q;
        for(int i=0;i<rooms[0].size();i++){
            q.push(rooms[0][i]);
        }
        while(!q.empty()){
            int a = q.top();
            q.pop();
            if(v[a]==1){
                continue;
            }
            for(int i=0;i<rooms[a].size();i++){
                q.push(rooms[a][i]);
            }
            v[a] = 1;
        }
        for(int i=1;i<v.size();i++){
            if(v[i]==0) return false;
        }
        return true;
    }
};