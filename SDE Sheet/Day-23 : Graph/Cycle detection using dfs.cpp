class Solution {
private:
    bool dfs(int node,vector<int>&pathvis,  vector<int>&vis, vector<vector<int>>& adj ){
        vis[node]=1;
        pathvis[node]=1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfs(it,pathvis,vis,adj)==true)return true;
            }
            else if(pathvis[it])return true;        
        }
        pathvis[node]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
                    adj[prerequisites[i][1]].push_back(prerequisites[i][0]);           
        }
        vector<int>vis(numCourses,0);
        vector<int> pathvis(numCourses,0);      

        for(int i=0;i<numCourses;i++){            
                if(!vis[i]){
                    if(dfs(i,pathvis,vis,adj))return false;
                }                    
        }

        return true;
    }
};
