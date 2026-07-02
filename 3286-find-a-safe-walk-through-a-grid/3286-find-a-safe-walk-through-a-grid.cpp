class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size();
        int n=grid[0].size();
        // vis[i][j] stores the maximum health we’ve had when reaching cell (i,j).
        // This prevents revisiting with worse health.
        vector<vector<int>> vis(m, vector<int>(n, -1)); 

        // Queue holds states: (x, y, remaining health)
        queue<tuple<int,int,int>> q;
        int startHealth = health - grid[0][0];
        if (startHealth < 1) 
        return false;
// else push in queue if >1
        q.push({0,0,startHealth});
        vis[0][0] = startHealth;

         // Directions: down, up, right, left
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()) {
            auto [x,y,h] = q.front(); 
            q.pop();

            // If we reached the destination with health ≥ 1, success
            if (x == m-1 && y == n-1 && h >= 1) 
            return true;

    // Explore neighbors
            for (auto& d : dirs) {
                int nx = x + d[0], ny = y + d[1];
                if (nx>=0 && nx<m && ny>=0 && ny<n) {
                    int nh = h - grid[nx][ny]; // reduce health if unsafe
                    // Only proceed if this path gives better health at (nx,ny)
                    if (nh > vis[nx][ny]) {
                        vis[nx][ny] = nh;
                        if (nh >= 1) q.push({nx,ny,nh});
                    }
                }
            }
        }
        // No path found with health ≥ 1
        return false;
    }
};