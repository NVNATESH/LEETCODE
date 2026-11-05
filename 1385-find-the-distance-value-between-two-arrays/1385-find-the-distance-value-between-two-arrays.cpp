class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int a = 0;
        for(int x:arr1){
            auto it = lower_bound(arr2.begin(),arr2.end(),x);
            bool vaild = true;
            if(it!=arr2.end() && abs(*it-x)<=d) vaild = false;
            if(it!=arr2.begin() && abs(*(it-1)-x)<=d) vaild = false;
            if(vaild==true) a++;
        }
        return a;
    }
};