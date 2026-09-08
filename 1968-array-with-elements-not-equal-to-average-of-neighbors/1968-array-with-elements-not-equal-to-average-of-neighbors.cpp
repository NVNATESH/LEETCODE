class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        // int j = nums.size()%2==0 ? nums.size()/2 : nums.size()/2+1;
        for(int j=0;j<nums.size();j+=2){
            nums[j] = pq.top();
            pq.pop();
        }
        for(int j = 1;j<nums.size();j+=2){
            nums[j] = pq.top();
            pq.pop();
        }
        return nums;
    }
};