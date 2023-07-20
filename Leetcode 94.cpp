class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int vis[n][m];
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
            }
        }
        int time=0;

        //bfs
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time,t);
            q.pop();

            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    if(abs(i)+abs(j)==2)continue;
                    int nrow = row + i;
                    int ncol = col + j;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol< m && !(vis[nrow][ncol]==2) && grid[nrow][ncol]==1){
                        vis[nrow][ncol]=2;
                        
                        q.push({{nrow,ncol},t+1});

                    }

                }
            }

        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j] !=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }

        return time;
    }
};
