class Solution {
public:
    int mod = 1e9+7;
    int dp[101][101][101][4];
    int rec(int t,int i,int j,int mask,string &word1,string &word2,string &target){
        if(t==target.size()){
            if(mask==3) return 1;
            return 0;
        }
        int res=0;
        if(dp[t][i][j][mask]!=-1) return dp[t][i][j][mask];
        for(int k=i;k<word1.size();k++){
            if(word1[k]==target[t]) 
                res=(res+rec(t+1,k+1,j,mask|1,word1,word2,target))%mod;
        }
        for(int k=j;k<word2.size();k++){
            if(word2[k]==target[t]) 
                res= (res+rec(t+1,i,k+1,mask|2,word1,word2,target))%mod;
        }
        return dp[t][i][j][mask] = res;
    }
    int interleaveCharacters(string word1, string word2, string target) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,0,0,word1,word2,target);
    }
};