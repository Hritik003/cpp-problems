
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    while(m--){
        long long s,t,sum=0;
        cin>>s>>t;
        if(s<t){
        for(int i = s-1 ; i<t-1;++i)
         {
            if(v[i]>v[i+1])
            {
                sum+= v[i]-v[i+1];
            }
         }
         
        }
        
        else
         {
             for(int i = s-1 ; i>t-1;--i)
             {
              if(v[i]>v[i-1])
               {
                sum+= v[i]-v[i-1];
               }
             }
         }
         cout<<sum<<"\n";
        }
    return 0;
}

