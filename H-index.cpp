#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v1(n),v2(n);
    for(int i=0;i<n;++i)
    {
        int x; cin>>x;
        v1[i]=x;v2[i]=x;
    }
    int h=1;
    for(int i=1;i<=n;++i)
    {
        int count =0;
        for(int j=0;j<i;++j)
        {
            if(v1[j]>=h+1)count++;
           
        }
        if(count>=h+1)h++;
         cout<<h<<" ";
    }
    cout<<"\n";
}
int main()
{
   int t;
   cin>>t;
   for(int k=1;k<=t;++k)
   {
       cout<<"Case #"<<k<<": ";
       solve();
   }
}
