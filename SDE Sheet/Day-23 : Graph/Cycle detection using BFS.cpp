class Solution {
private:
    bool bfs(int src, vector<int>&vis, vector<vector<int>>& adj ){
        vis[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        while(!q.empty()){
            int node = q.front().first;
            int par = q.front().second;

            for(auto it : adj[node] ){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(par!=it){
                    return true;
                }
            }
        }
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
                    adj[prerequisites[i][1]].push_back(prerequisites[i][0]);           
        }
        vector<int>vis(numCourses,0);
        

        for(int i=0;i<numCourses;i++){            
                if(!vis[i]){
                    if(bfs(i,vis,adj))return false;
                }            
        }

        return true;
    }
};
