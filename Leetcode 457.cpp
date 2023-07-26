class Solution {
private:
   void dfs(int node, vector<int>&vis, vector<int>adj[],vector<vector<int>>& isConnected ){
       vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,isConnected);
        }
    }
   }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);

                }
            }
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){count++;dfs(i,vis,adj,isConnected);}
        }
        return count;

    }
};
