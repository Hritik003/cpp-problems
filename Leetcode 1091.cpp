class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if(grid[0][0] == 1) return -1;

        vector<vector<int>>dist(n,vector<int>(m,1e4));
        dist[0][0]=0;
        queue< pair< pair<int,int>, int> >q;
        q.push({{0,0},1});

        int delrow[] = {-1,-1,-1,0,1,1,1,0};
        int delcol[] = {-1,0,1,1,1,0,-1,-1};


        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dis = q.front().second;
            q.pop();

             if(row==(n-1) && col == (m-1))return dis;

            for(int i=0;i<8;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
               
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==0 && dis+1<dist[nrow][ncol]){
                    dist[nrow][ncol]=dis+1;
                    q.push({{nrow,ncol},dis+1});
                }
            }
        }
        return -1;
    }
};
