class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int s) {
        int n = arrivals.size();
        unordered_map<int,deque<int>> m;
        int cnt =0;
        for(int i =0 ;i<n;i++){
            int item = arrivals[i];
            while(!m[item].empty() && m[item].front()<=i-w){
                m[item].pop_front();
            }
            if(m[item].size()<s){
                m[item].push_back(i);
            }
            else{
                cnt++;
            }
        }
        return cnt;
    }
};