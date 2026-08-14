class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> pref(n+1,0);
        for(int i=0;i<arr.size();i++){
            pref[i+1] = pref[i]^arr[i];
        }
        int res = 0;
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j;k<n;k++){
                    int a = pref[j]^pref[i];
                    int b = pref[k+1]^pref[j];
                    if(a==b){res++;
                    // cout<<i<<" "<<j<<" "<<k<<" "<<a<<endl;
                    }
                }
            }
        }
        return res;
    }
};