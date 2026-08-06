class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int row = mat.size();
        int col = mat[0].size();

        int top = 0, left = 0, bottom = row - 1, right = col - 1;

        while(top <= bottom && left <= right) {
            // Traverse top row
            for(int j = left; j <= right; j++) {
                ans.push_back(mat[top][j]);
            }
            top++;

            // Traverse right column
            for(int i = top; i <= bottom; i++) {
                ans.push_back(mat[i][right]);
            }
            right--;

            // Traverse bottom row (if still valid)
            if(top <= bottom) {
                for(int j = right; j >= left; j--) {
                    ans.push_back(mat[bottom][j]);
                }
                bottom--;
            }

            // Traverse left column (if still valid)
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};
