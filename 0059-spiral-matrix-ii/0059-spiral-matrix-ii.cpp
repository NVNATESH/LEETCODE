class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m(n,vector<int>(n,0));
        int top = 0,left = 0,right=n-1,bottom = n-1,d=1; 
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                m[top][i] = d;
                d++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                m[i][right] = d;
                d++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    m[bottom][i] = d;
                    d++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    m[i][left] = d;
                    d++;
                }
                left++;
            }
        }
        return m;
    }
};