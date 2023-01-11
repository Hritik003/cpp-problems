class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
            f(board);
    }
    bool f(vector<vector<char>> &board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[1].size();j++){
                if(board[i][j]=='.'){
                    for(char c = '1'; c<='9';c++){
                        if(check(board,i,j,c)== true){
                            board[i][j]=c;
                            if(f(board)==true)return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;

                }
            }
            
        }
        return true;
    }

    bool check(vector<vector<char>> &board, int row, int col, char c){
        for(int t = 0;t<9;t++){
            //checking the row
            if(board[row][t]==c){
                return false;
            }

            //checking the column
            if(board[t][col]==c){
                return false;
            }
            
            //checking the box
            if(board[3*(row/3)+t/3][3*(col/3)+t%3]==c){
                return false;
            }
            
        }
        return true;
    }
};
