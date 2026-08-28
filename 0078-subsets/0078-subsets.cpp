class Solution {
public:
    void subseq(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans) {
        // Base case
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Exclude current element
        subseq(nums, index + 1, temp, ans);

        // Include current element
        temp.push_back(nums[index]);
        subseq(nums, index + 1, temp, ans);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subseq(nums, 0, temp, ans);
        return ans;
    }
};
