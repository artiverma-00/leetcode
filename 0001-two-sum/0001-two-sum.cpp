class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        vector<pair<int,int>> arr; 
        for (int i = 0; i < n; i++) arr.push_back({a[i], i}); // store value + original index

        sort(arr.begin(), arr.end()); // sort by value

        int l = 0, r = n - 1;
        while (l < r) {
            int sum = arr[l].first + arr[r].first;
            if (sum == target) {
                return {arr[l].second, arr[r].second}; // return original indices
            }
            else if (sum < target) l++;
            else r--;
        }
        return {}; // no solution
    }
};
