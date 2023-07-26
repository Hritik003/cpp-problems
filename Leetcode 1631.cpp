class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[0][0]=0;

        priority_queue< pair < pair<int,int> ,int>,
                        vector<pair < pair<int,int> ,int>>, 
                        greater<pair < pair<int,int> ,int>  >>pq;
        pq.push({{0,0},0});

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        while(!pq.empty()){
            int row = pq.top().first.first;
            int col = pq.top().first.second;
            int diff = pq.top().second;
            pq.pop();

            if(row == (n-1) && col ==(m-1))return diff;
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                    int n_effort = max(abs(heights[row][col]-heights[nrow][ncol]),diff);
                    if(n_effort<dist[nrow][ncol]){
                         dist[nrow][ncol]=n_effort;
                        pq.push({{nrow,ncol},dist[nrow][ncol]});

                    }
                }
                
            }
        }
        return 0;      

        
    }
};
