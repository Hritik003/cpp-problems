class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX )); 
        vector<pair<int, int>> adj[n];
        for (auto it : edges) {
            adj[it[0]].push_back({ it[1], it[2] });
            adj[it[1]].push_back({ it[0], it[2] });
        }

        for (int i = 0; i < n; i++) {
            vector<int> visited(n, false); 
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
            pq.push({ 0, i });
            dist[i][i] = 0; 

            while (!pq.empty()) {
                int node = pq.top().second;
                int dis = pq.top().first;
                pq.pop();

                if (visited[node]) continue;

                visited[node] = true;

                for (auto it : adj[node]) {
                    int adjNode = it.first;
                    int wt = it.second;

                    if (dis + wt < dist[i][adjNode]) {
                        dist[i][adjNode] = dis + wt;
                        pq.push({ dist[i][adjNode], adjNode });
                    }
                }
            }
        }

        int city = -1;
        int count = n;
        for (int i = 0; i < n; i++) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                if (dist[i][j] <= distanceThreshold) {
                    c++;
                }
            }
            if (c <= count) {
                count = c;
                city = i;
            }
        }

        return city;
    }
};
