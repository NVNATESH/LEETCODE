class Solution {
public:
    int search(vector<int> & weights,int v){
        int d = 0,sum = 0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]>v){
                d++;
                sum = 0;
            }
            sum += weights[i];
        }
        if(sum!=0) d++;
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high = accumulate(weights.begin(),weights.end(),0);
        int low = *max_element(weights.begin(),weights.end());
        while(low<high){
            int mid = low +(high-low)/2;
            if(search(weights,mid)>days){
                low =mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};