class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0, high = arr.size();

        while (low < high) {
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
            cout<<low<<" "<<high<<endl;
        }

        return low + k;
    }
};