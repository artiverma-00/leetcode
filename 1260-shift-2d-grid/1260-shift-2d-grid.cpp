class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        // initialize result with same dimensions
        vector<vector<int>> result(m, vector<int>(n));

        // flatten grid into 1D
        vector<int> flat;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat.push_back(grid[i][j]);
            }
        }

        int total = m * n;
        k = k % total; // avoid unnecessary rotations

        // shift elements
        for (int idx = 0; idx < total; idx++) {
            int newIdx = (idx + k) % total;
            int newRow = newIdx / n;
            int newCol = newIdx % n;
            result[newRow][newCol] = flat[idx];
        }

        return result;
    }
};
