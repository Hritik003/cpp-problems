class Solution {
private:
    void dfs(int row, int col , vector<vector<int>> &vis,vector<vector<int>>&mat, int &n, int &m ){
        vis[row][col]=1;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]==1){
                dfs(nrow, ncol, vis, mat, n , m);
            }
        }
    }    
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> mat = grid;
        vector<vector<int>> vis(n,vector<int>(m,0));

        //first row and last row
        for(int j=0;j<m;j++){

            //first row
            if(!vis[0][j] && mat[0][j]==1){
                dfs(0,j,vis,mat,n,m);
            }

            //last row
            if(!vis[n-1][j] && mat[n-1][j]==1){
                dfs(n-1,j,vis,mat,n,m);
            }
        }


        //first col and last col
        for(int i=0;i<n;i++){

            //first col
            if(!vis[i][0] && mat[i][0]==1){
                dfs(i,0,vis,mat,n,m);
            }

            //last col
            if(!vis[i][m-1] && mat[i][m-1]==1){
                dfs(i,m-1,vis,mat,n,m);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};
