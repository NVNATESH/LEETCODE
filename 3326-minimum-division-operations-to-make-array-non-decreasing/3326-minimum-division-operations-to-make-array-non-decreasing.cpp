typedef long long ll;
class Solution {
public:
    void siv(vector<ll>& prime,vector<ll>& v){
        for(ll i=0;i<v.size();i++){
            v[i] = i;
        }
        for(ll i=2;i<v.size();i++){
            if(v[i]==i){
                prime.push_back(i);
                for(ll j=1LL*i*i;j<v.size();j+=i){
                    if(v[j]==j){
                        v[j] = i;
                    }
                }
            }
        }
    }
    int minOperations(vector<int>& nums) {
        ll m = *max_element(nums.begin(),nums.end());
        vector<ll> v(m+1);
        vector<ll> prime;
        siv(prime,v);
        ll i = nums.size()-1,res = 0;
        while(i>0){
            if(nums[i]>=nums[i-1]){
                i--;
            }
            else{
                while(nums[i] < nums[i-1]) {
                if(nums[i-1] == v[nums[i-1]]) return -1;
                nums[i-1] = v[nums[i-1]];
                res++;
                }
                    i--;
                }
        }
        return res;
    }
};