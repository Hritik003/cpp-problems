
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
        }
    }
    int row=(n/2),col=(n-1)/2,curr=2;
    ans[row][col]=curr;
    curr+=2;
    char turn = 'r';//first direction is towards right
    
    for(int i=1;i<=n;i++){
        if(turn=='r'){
            for(int j=1;j<=i;j++){
                if(j==n)break;
                col++;
                ans[row][col]=curr;
                curr+=2;
            }
            if(i!=n)
            turn='u';//next turn
        }
        
        if(turn=='l'){
            for(int j=1;j<=i;j++){
                if(j==n)break;
                col--;
                ans[row][col]=curr;
                curr+=2;
            }
            if(i!=n)
            turn='d';//next turn
        }
        
        if(turn=='u'){
            for(int j=1;j<=i;j++){
                if(j==n)break;
                row--;
                ans[row][col]=curr;
                curr+=2;
            }
            if(i!=n)
            turn='l';//next turn
        }
        if(turn=='d'){
            for(int j=1;j<=i;j++){
                if(j==n)break;
                row++;
                ans[row][col]=curr;
                curr+=2;
            }
            if(i!=n)
            turn='r';//next turn
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
