
#include <bits/stdc++.h>

using namespace std;
int fact(int n)
{
    
    if(n==0 || n==1)return 1;
    else 
    {
       return n*fact(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int f = fact(n-1);
    if(((f+1)%n)) cout<<"FALSE"<<"\n";
    else
    cout<<"TRUE"<<"\n";
    
    

    return 0;
}
