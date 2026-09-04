    class Solution {
    public:
        int minDeletion(vector<int>& nums) {
            stack<int> s;
            int res = 0,a = 0,n = nums.size();
            for(int i=0;i<nums.size();i++){
                s.push(nums[i]);
                if(a%2==0){
                    if(i+1<n && !s.empty() && s.top()==nums[i+1]){
                        s.pop();
                        res++;
                    }
                    else{
                        a++;
                    }
                }
                else{
                    a++;
                }
            }
            if((n-res)%2!=0 && res < nums.size()) return res+1;
            return res;
        }
    };