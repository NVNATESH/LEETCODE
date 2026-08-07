class Solution {
public:
    int halveArray(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        priority_queue<double> pq;
        double sum = 0,d=0,cnt = 0;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]*1.0);
            sum += nums[i]*1.0;
        }
        d = sum/(2*1.0);
        while(sum>((double)(d))){
            double a = (double)(pq.top()/(2*1.0));
            // cout<<a<<" "<<sum<<" "<<d<<endl;
            sum -= pq.top();
            pq.pop();
            pq.push(a);
            sum += a;
            cnt++;
        }
        return cnt;
    }
};