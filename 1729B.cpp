
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,val;
        cin>>n;
        
        string b="",a;
        cin>>a;
        
        for(ll i=n-1;i>=0;i--){
            if(a[i]=='0'){
                val=(a[i-2]-48)*10 + a[i-1]-48;
                i=i-2;
            }
            else{
                val = a[i]-48;
            }
            b= b+ char(val+96);
        }
        
        reverse(b.begin(),b.end());
        cout<<b<<"\n";
    }

    return 0;
}
