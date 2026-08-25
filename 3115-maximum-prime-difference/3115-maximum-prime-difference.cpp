class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(101,0);
        v[0]=1;
        v[1]=1;
        for(int i=4;i<101;i+=2) v[i] = 1;
        for(int i=3;i<101;i+=2){
            if(v[i]==0){
                for(int j=3*i;j<101;j+=2*i){
                    v[j] = 1;
                }
            }
        }
        // for(int i=0;i<101;i++){
        //     cout<<i<<" "<<v[i]<<endl;
        // }
        int a = -1,b = -1;
        for(int i=0;i<n;i++){
            if(v[nums[i]]==0){
                a = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(v[nums[i]]==0){
                b = i;
                break;
            }
        }
        if(a==-1) return 0;
        return b-a;
    }
};