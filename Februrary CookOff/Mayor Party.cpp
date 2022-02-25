#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c>b)
        {
            cout<< a+c <<"\n";
        }
        else cout<< b<<"\n";
    }
    return 0;
}
