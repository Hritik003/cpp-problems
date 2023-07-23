class Solution {
private:
    bool dfs(int start,vector<int>&vis,vector<int>&pathvis,vector<vector<int>>& graph,vector<int>&check ){
        vis[start]=1;
        pathvis[start]=1;
        check[start]=0;
        for(auto it : graph[start]){
            if(!vis[it]){
                if(dfs(it,vis,pathvis,graph,check)==true){
                    check[start]=0;
                    return true;
                }
            }
            else if(pathvis[it]){
                check[start]=0;
                return true;
            }
        }
        pathvis[start]=0;
        check[start]=1;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        int m = graph[0].size();
        vector<int>vis(n,0);
        vector<int>pathvis(n,0);
        vector<int>check(n,0);
        vector<int>safe;
        for(int i=0;i<n;i++){
                if(!vis[i]){
                    dfs(i,vis,pathvis,graph,check);
                }
        }
        for(int i=0;i<n;i++){
            if(check[i]==1)safe.push_back(i);
        }
        return safe;
        
    }
};
