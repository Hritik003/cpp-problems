#include<bits/stdc++.h>
using namespace std;
#define res cout<< "Case #"<<i<<": "
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        string s,t;
        cin>>s>>t;
        int p1=0,p2=0,ans=0;
        while(p1<s.size() && p2<t.size())
        {
            if(s[p1]==t[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                p2++;
                ans++;
            }
        }
        if(p1 != s.size())
        {
          res << "IMPOSSIBLE"<<"\n";  
        }
        else 
        {
            res << ans + t.size() - p2 <<"\n";
        }
        
    }
}
