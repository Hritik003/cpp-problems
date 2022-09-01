
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,ans=0;
        string s;
        cin>>n>>s;
        vector<ll>current(n), change(n);
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                current[i]=n-i+1;
                change[i]=i-n+i-1;
            }
            else{
                current[i]=i;
                change[i]=n-i-i+1;
            }
            ans+=current[i];
             
        }
        sort(change.begin(),change.end());
        reverse(change.begin(),change.end());
        ll res=0;
        for(int k=1;k<=n;k++){
            if(change[k-1]>0){
                res=res+change[k];
            }
            cout<<res<<" ";
        }
        cout<<"\n";
        
    }

    return 0;
}
