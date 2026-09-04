class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();
        s.push(nums[0]);
        for(int i=1;i<n;i++){
            int a = gcd(s.top(),nums[i]);
            if(a==1) s.push(nums[i]);
            else{
                long long r = (1LL*s.top()*nums[i])/a;
                s.pop();
                while(!s.empty() && gcd(r,s.top())!=1){
                    r = (1LL*s.top()*r)/gcd(r,s.top());
                    s.pop();
                }
                s.push(r);
            }
        }
        vector<int> v(s.size());
        for(int i=v.size()-1;i>=0;i--){
            v[i] = s.top();
            s.pop();
        }
        return v;
    }
};