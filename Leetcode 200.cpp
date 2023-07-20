class Solution {
private:
    void bfs(int row, int col,vector<vector<int>> &vis , vector<vector<char>> &grid ){
        vis[row][col]=1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            int delrow, delcol;

            for(delrow = -1 ; delrow<=1;delrow++){
                for(delcol=-1;delcol<=1;delcol++){
                    if(abs(delrow)+abs(delcol)==2)continue;
                    int newrow = r + delrow;
                    int newcol = c + delcol;
                    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && !vis[newrow][newcol] && grid[newrow][newcol]=='1'){
                        vis[newrow][newcol]=1;
                        q.push({newrow,newcol});
                    }
                }
            }

        }

    }    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;


    }
};
