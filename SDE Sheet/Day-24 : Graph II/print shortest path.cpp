class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int,int>>adj[n+1];
        for(auto it : edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
            
        }
         vector<int>parent(n+1);
         for(int i=1;i<=n;i++)parent[i]=i; 
         vector<int>dist(n+1,1e9);
         priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;
         pq.push({1,0});
         dist[1]=0;
         
         while(!pq.empty()){
             int node = pq.top().first;
             int dis = pq.top().second;
             pq.pop();
             
             for(auto it : adj[node]){
                 int adjNode=it.first;
                 int wt = it.second;
                 if(dis+wt<dist[adjNode]){
                     parent[adjNode]=node;
                     dist[adjNode]=dis+wt;
                     pq.push({adjNode,dist[adjNode]});
                 }
             }
             
         }
         if(dist[n]==1e9)return {-1};
         vector<int>res;
         int node = n;
         while(parent[node]!=node){
             res.push_back(node);
             node = parent[node];
         }
         res.push_back(1);
         reverse(res.begin(),res.end());
         return res;
    }
};
