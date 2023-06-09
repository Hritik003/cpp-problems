#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  
    cin>>t;
    while(t--)
    {
        int n,one=0,zero=0;
        int count=0;
        cin>>n;
        vector<int> v(n);
        for(int x : v)
        {
            cin>>x;
            if(x==0)zero++;        }
        if(zero==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<2*zero<<"\n";
        }
    }

    return 0;
}
