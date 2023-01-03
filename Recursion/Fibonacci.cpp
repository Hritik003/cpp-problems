 
#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1){
        return n;
    }
    int l=f(n-1);
    int s=f(n-2);
    return l+s;
    
}
int main()
{
    //multiple_Recursion
    int n;
    cin>>n;
    cout<<"The fibonacci sum is : "<<f(n)<<"\n";
    return 0;
}

//time complexity ~ 2^n or exponential
