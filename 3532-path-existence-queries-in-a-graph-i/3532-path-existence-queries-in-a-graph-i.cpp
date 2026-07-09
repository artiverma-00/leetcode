class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {

        // Store component number for each index
        vector<int> component(n);

        int comp = 0;
        component[0] = comp;

        // Build connected components
        for (int i = 1; i < n; i++) {
            if (nums[i] - nums[i - 1] > maxDiff) {
                comp++;
            }
            component[i] = comp;
        }

        // Answer queries
        vector<bool> ans;

        for (auto &q : queries) {
            int u = q[0];
            int v = q[1];

            ans.push_back(component[u] == component[v]);
        }
        return ans;

        
    }
};