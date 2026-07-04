

class Solution {
public:
    void bfs(int start, unordered_map<int, vector<pair<int,int>>>& adj, 
             vector<bool>& visited, int &result) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while(!q.empty()) {
            int u = q.front(); q.pop();

            for(auto &P : adj[u]) {
                int v = P.first;   // neighbor city
                int d = P.second;  // road distance

                result = min(result, d);  // update minimum edge weight

                if(!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int, vector<pair<int,int>>> adj;

        for(auto &vec : roads){
            int u = vec[0];
            int v = vec[1];
            int d = vec[2];

            adj[u].push_back({v, d});
            adj[v].push_back({u, d});
        }

        vector<bool> visited(n+1, false); // +1 because cities are 1-indexed
        int result = INT_MAX;

        bfs(1, adj, visited, result);

        return result;
    }
};
