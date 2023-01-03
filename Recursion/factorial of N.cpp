#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==0){
        return 1;
    }
    return n*f(n-1);
    
}
int main()
{
    //functional_Recursion
    int n;
    cin>>n;
    cout<<"The factorial is : "<<f(n)<<"\n";
    

    return 0;
}
