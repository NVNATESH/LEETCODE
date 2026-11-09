class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int a = -1,n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=target[i]){
                a = i;
                break;
            }
        }
        if(a==-1){
            int res = 1;
            for(int i = n-2;i>=0;i--){
                if(nums[i]>=nums[i+1]){
                    res++;
                }
                else{
                    return res;
                }
            }
            return res;
        }
        for(int j = a;j<n-1;j++){
            if(target[j]>=target[j+1]){
                continue;
            }
            else{
                return 0;
            }
        }
        vector<int> t(nums.begin()+a,nums.end());
        sort(t.rbegin(),t.rend());
        for(int i=0;i<t.size();i++){
            // cout<<t[i]<<" "<<target[a+i]<<endl;
            if(t[i]!=target[a+i]) return 0;
        }
        int res = 1;
        for(int i=a-1;i>=0;i--){
            if(target[i]>=target[i+1]){
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};