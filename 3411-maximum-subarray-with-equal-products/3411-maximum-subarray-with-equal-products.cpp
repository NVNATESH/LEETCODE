class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size() ;
        int ans = 0 ;
        for(int i = 0 ; i< n ; i++){
            long long  prod = nums[i] ;
            int  g = nums[i];
            int l = nums[i] ;
            for(int j  = i+1  ; j< n ; j++){
                prod *= nums[j] ;
                g = gcd(g , nums[j]) ;
                l = lcm(l , nums[j]) ;
                if(prod > 25200) break ;
                if(l*g == prod) ans = max(ans , j-i+1) ;
            }
        }
        return ans ;
    }
};