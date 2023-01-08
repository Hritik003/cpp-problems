class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>ds(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            ds[i]=s;
        }
        f(0,ans,ds,n);
        return ans;
    }

    void f(int row, vector<vector<string>> &ans, vector<string> &ds , int n){
        //base condn
        if(row ==n){
            ans.push_back(ds);
            return;
        }
        for(int col = 0; col<n;col++){
            if(check(row,col,ds,n)){
                ds[col][row]='Q';
                f(row+1,ans,ds,n);
                ds[col][row]='.';
            }
        }

    }

    bool check(int row, int col, vector<string> &ds, int n){
        int temp1 = row;
        int temp2= col;

        //checking left diagonally
        while(row>=0 && col >=0){
            if(ds[col][row]=='Q') return false;
            row--;
            col--;
        }

        //checking top side
        col= temp2;
        row= temp1;
        while(col<n && row>=0){
            if(ds[col][row]=='Q') return false;
            row--;
        }

        //checking right diagonally
        col= temp2;
        row= temp1;
        while(col<n &&row>=0){
            if(ds[col][row]=='Q') return false;
            row--;
            col++;
        }
        return true;
    }


};
