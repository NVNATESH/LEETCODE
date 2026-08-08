class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n+1,0),res;
        for(int i=0;i<bookings.size();i++){
            v[bookings[i][0]-1] += bookings[i][2];
            v[bookings[i][1]] -= bookings[i][2];
        }
        int a = 0;
        for(int i=0;i<v.size()-1;i++){
            a += v[i];
            res.push_back(a);
        }
        return res;
    }
};