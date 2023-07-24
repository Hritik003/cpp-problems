class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        
        vector<int>vis(N,0);
        queue<int>q;
        q.push(src);
        vector<int>dist(N,1e9);
        dist[src]=0;
        vector<int>adj[N];
        for(int i=0;i<M;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
             
            for(auto it : adj[node]){
                if(dist[node]+1<dist[it]){
                    dist[it]=1+dist[node];
                    q.push(it);
                }
            } 
        }
        
        vector<int>res(N,-1);
        for(int i=0;i<N;i++){
            if(dist[i]!=1e9){
                res[i]=dist[i]; 
            }
        }
        
        return res;
    }
};
