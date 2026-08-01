class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];       // smallest element seen so far
        int maxi = -1;            // maximum difference, default -1

        for (int i = 1; i < n; i++) {
            if (nums[i] > mini) {
                maxi = max(maxi, nums[i] - mini);
            }
            mini = min(mini, nums[i]);  // update minimum
        }

        return maxi;
    }
};
