class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        //we initialize set
        set<pair<int,int>>st;
        st.insert({0,S});
        vector<int>dist(V,1e9);
        
        dist[S]=0;
        
        while(!st.empty()){
            auto it = *(st.begin());
            int dis = it.first;
            int node = it.second;
            st.erase(it);
            
            for(auto x : adj[node]){
                int adjNode=x[0];
                int wt = x[1];
                if(dis+wt<dist[adjNode]){
                    
                    if(dist[adjNode]!=1e9)st.erase({dist[adjNode],adjNode});
                    
                    dist[adjNode]=dis+wt;
                    st.insert({dist[adjNode],adjNode});
                    
                }
               
            }
        }
        return dist;
        
        
        
        
    }
};
