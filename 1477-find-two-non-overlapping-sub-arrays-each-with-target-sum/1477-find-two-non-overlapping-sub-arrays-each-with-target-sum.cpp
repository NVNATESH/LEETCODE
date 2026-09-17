class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> v(n,INT_MAX);
        int j = 0,sum = 0,ans = INT_MAX,best = INT_MAX;
        for(int i=0;i<arr.size();i++){
               sum += arr[i];
               while(sum>target){
                sum -= arr[j];
                j++;
               }
               if(sum==target){
                int a = i-j+1;
                if(j>0 && v[j-1]!=INT_MAX){
                    ans = min(ans,a+v[j-1]);
                }
                best = min(best,a);
               }
               v[i] = best;
        }
        return ans!=INT_MAX ? ans : -1;
    }
};