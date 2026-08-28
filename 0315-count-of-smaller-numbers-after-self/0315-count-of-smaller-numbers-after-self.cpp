class Solution {
public:
    void merge(vector<int>& nums,vector<int>& indices,vector<int> &counts,int left,int right){
        if(left>=right) return;
        int mid = (left+right)/2;
        merge(nums,indices,counts,left,mid);
        merge(nums,indices,counts,mid+1,right);
        int i = left,j = mid+1,rightcount = 0;
        vector<int> temp;
        while(i<=mid && j<=right){
            if(nums[indices[j]]< nums[indices[i]]){
                temp.push_back(indices[j]);
                rightcount++;
                j++;
            }
            else{
                counts[indices[i]]+=rightcount;
                temp.push_back(indices[i]);
                i++;
            }
        }
        while(i<=mid){
            counts[indices[i]] += rightcount;
            temp.push_back(indices[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(indices[j]);
            j++;
        }
        for(int k = 0;k<temp.size();k++){
            indices[left+k] = temp[k];
        }
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> counts(n,0),indices(n);
        iota(indices.begin(),indices.end(),0);
        merge(nums,indices,counts,0,n-1);
        return counts;
    }
};