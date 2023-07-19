class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        vis[0]=1;
        queue<int>q;
        q.push(0);
        vector<int> bfs;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto x : adj[node]){
                if(vis[x]!=1){
                q.push(x);
                vis[x]=1;
                }
            }
            
            
        }
        return bfs;
        
    }
};
