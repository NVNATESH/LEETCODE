class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        pq.push(0);
        if(stones.size()==0) return 0;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()>2){
            int b = pq.top();
            pq.pop();
            int c = pq.top();
            pq.pop();
            int d = abs(b-c);
            if(b!=c){
                pq.push(d);
            }
        }
        return pq.top();
    }
};