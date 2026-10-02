class Solution {
public:
  //Bottom-Up dp
    int twoCitySchedCost(vector<vector<int>>& costs){
        int n = costs.size()/2;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for (int i = 1; i <= n; i++)dp[i][0] = dp[i - 1][0] + costs[i - 1][0];
        for (int j = 1; j <= n; j++)dp[0][j] = dp[0][j - 1] + costs[j - 1][1];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                dp[i][j] = min(dp[i-1][j]+costs[i+j-1][0], dp[i][j-1] + costs[i+j-1][1]);
        return dp[n][n];   
    
    }
};