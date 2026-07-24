class Solution {
public:
    int search(vector<int>& arr, int k) {
        int s = 0, e = arr.size() - 1, m;

        while (s <= e) {
            m = s + (e - s) / 2;

            if (arr[m] == k) {
                return m;
            }

            // Left half is sorted
            if (arr[s] <= arr[m]) {
                if (k >= arr[s] && k < arr[m]) {
                    e = m - 1;
                } else {
                    s = m + 1;
                }
            }
            // Right half is sorted
            else {
                if (k > arr[m] && k <= arr[e]) {
                    s = m + 1;
                } else {
                    e = m - 1;
                }
            }
        }
        return -1; // not found
    }
};
