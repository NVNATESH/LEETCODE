class Solution {
public:
    bool sumGame(string num) {
        int l = 0, r = 0;
        int ql = 0, qr = 0;

        for (int i = 0; i < num.size(); i++) {
            if (num[i] == '?') {
                if (i < num.size() / 2)
                    ql++;
                else
                    qr++;
            } 
            else {
                if (i < num.size() / 2)
                    l += num[i] - '0';
                else
                    r += num[i] - '0';
            }
        }

        int diff = l - r;
        int qdiff = ql - qr;

        return 2 * diff != -9 * qdiff;
    }
};
