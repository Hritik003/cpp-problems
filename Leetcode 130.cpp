class Solution {
private:
    void dfs(int row, int col ,vector<vector<int>>&vis,vector<vector<char>>& mat, int &n, int &m ){
        vis[row][col]=1;
        int delrow[] = {-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow,ncol,vis,mat,n,m);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {\
        int n = board.size();//row
        int m = board[0].size();//col
        vector<vector<char>>mat = board;
        vector<vector<int>>vis(n,vector<int>(m,0));

        //checking the boundaries

        //1st column
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
                if(!vis[i][0]){
                    dfs(i,0,vis,mat,n,m);
                }
            }
        }

        //last column
        for(int i=0;i<n;i++){
            if(mat[i][m-1]=='O'){
                if(!vis[i][m-1]){
                    dfs(i,m-1,vis,mat,n,m);
                }
            }
        }

        //1st row
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O'){
                if(!vis[0][j]){
                    dfs(0,j,vis,mat,n,m);
                }
            }
        }

        //last row
        for(int j=0;j<m;j++){
            if(mat[n-1][j]=='O'){
                if(!vis[n-1][j]){
                    dfs(n-1,j,vis,mat,n,m);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    mat[i][j]='X';
                }
            }
        }

        board = mat;
        
    }
};
