#include<bits/stdc++.h>
using namespace std;
#define z long long int

int main() 
{
    
    z n;
    cin>>n;
    vector< pair<z,z> > v;
    z flag=0;
    for(int i=0;i<n;i++)
    {
        z a,b; 
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
            if(v[i].second > v[i+1].second)
            {
                flag=1; break;
            }
    }
    if(flag)
        cout <<"Happy Alex" ; else cout <<"Poor Alex" ;
    
}
