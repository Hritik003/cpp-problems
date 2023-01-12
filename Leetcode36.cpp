class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board , int c, int row, int col)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i] == c)
            {
                return false;
            }
            if(board[i][col] == c)
            {
                return false;
            }
            if(board[row/3 *3 + i/3] [  col/3 * 3 +   (i%3)  ] == c)
            {
                return false;
            }
        }
        return true;
    }
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                
                if(board[i][j] != '.')                
                {
                    int temp = board[i][j];
                    board[i][j]  = '*';
                    if(!isSafe(board, temp, i ,j))
                    {
                        return false;
                    }
                    board[i][j] =  temp;
                }
                
            }
        }
        return true;
    }
};
