class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int ROWS = board.size();
        int COLS = board[0].size();

        for(int i=0;i<ROWS;i++){
            for(int j=0;j<COLS;j++){
                  if(board[i][j]==word[0]){
                    if(search(0,i,j,ROWS, COLS, board,word))return true;
                  }
                
            }
        }
        return false;        
    }

    bool search(int k , int row, int col,int ROWS, int COLS, vector<vector<char>> &board, string word){
        
        if(row<0||col<0||row>=ROWS||col>=COLS||board[row][col]!=word[k])return false;
        if(k==word.size()-1)return true;


        board[row][col]='#';

        if(search(k+1,row+1,col,ROWS,COLS,board,word) ||
           search(k+1,row-1,col,ROWS,COLS,board,word) ||
           search(k+1,row,col+1,ROWS,COLS,board,word) ||
           search(k+1,row,col-1,ROWS,COLS,board,word))
           return true;

        board[row][col]=word[k];
        return false; 

    }
};
