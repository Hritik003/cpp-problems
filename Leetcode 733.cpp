class Solution {
private:
    void dfs(int row, int col , vector<vector<int>>& image, int &initial, int &color, int &n, int &m){
      
        if(row<0 || row>=n || col< 0 || col>=m || image[row][col]!=initial){
            return;
        }
        image[row][col]=color;
        // neighbours
        dfs(row-1,col,image,initial,color,n,m);
        dfs(row,col-1,image,initial,color,n,m);
        dfs(row+1,col,image,initial,color,n,m);
        dfs(row,col+1,image,initial,color,n,m);
    }    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n = image.size();
        int m = image[0].size();          
        int initial = image[sr][sc];
        dfs(sr,sc,image,initial, color,n,m);
        return image;

    }
};
