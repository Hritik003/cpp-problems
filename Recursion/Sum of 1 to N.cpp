#include <bits/stdc++.h>
using namespace std;
void f(int n,int sum){
    if(n<1){
        cout<<sum<<"\n";
        return;
    }
    
    f(n-1,sum+n);
    
}
int main()
{
    //parameterized_Recursion
    int n,sum=0;
    cin>>n;
    cout<<"The sum:"<<"\n";
    f(n,sum);

    return 0;
}
