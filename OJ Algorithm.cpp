#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
       if(i<10)
       {
           cout<< "00"<<i;
       }
       else if(i<100)
       {
           cout<< "0"<<i;
       }
       else cout << i ;
    }
   return 0;
}
