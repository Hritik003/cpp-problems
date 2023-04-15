class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        
        int col = matrix[0].size();
        if(row==1 && col==1)return matrix[0][0]==target;
        if(target< matrix[0][0]  ||  target> matrix[row-1][col-1])return false;
        int i=0,j=col-1;
        while(i<row&&j>=0){
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]>target)j--;
            else i++;
        }
        return false;
        
    }
};
