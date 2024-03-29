class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        //we initialize priority queue 
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int>dist(V);
        for(int i=0;i<V;i++)dist[i]=1e9;
        pq.push({0,S});
       
        dist[S]=0;
        
        while(!pq.empty()){
            int distance = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it : adj[node]){
                int adjNode=it[0];
                int wt = it[1];
                
                if(distance+wt<dist[adjNode]){
                    dist[adjNode]=distance+wt;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
        
        
        
    }
};
