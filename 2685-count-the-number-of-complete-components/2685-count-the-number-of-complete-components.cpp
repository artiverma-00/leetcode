class Solution {
public:
//dfs used there for node storew  
    void dfs(int node, vector<vector<int>>& adj,
             vector<bool>& visited, int& nodes, int& degreeSum) {
        
        visited[node] = true;
        nodes++;
        degreeSum += adj[node].size();

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                dfs(neighbour, adj, visited, nodes, degreeSum);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(n);

        // Create adjacency list is there 
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);
        int answer = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int nodes = 0;
                int degreeSum = 0;

                dfs(i, adj, visited, nodes, degreeSum);

                // Every edge is counted twice in degreeSum and return the sum
                int componentEdges = degreeSum / 2;

                int requiredEdges = nodes * (nodes - 1) / 2;

                if (componentEdges == requiredEdges) {
                    answer++;
                }
            }
        }

        return answer;
    }
};