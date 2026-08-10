class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        int b = first;
        for(int i=0;i<encoded.size();i++){
            b = b^encoded[i];
            v.push_back(b);
        }
        return v;
    }
};