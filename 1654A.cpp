#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   
   while(t--)
   {
       int n,d=0;
       cin>> n;
       int v[n];
       for(int x=0;x<n;x++)
       {
           cin>>v[x];
       }
       sort(v,v+n);
       d = v[n-1]-v[0];
       cout<<d<<endl;
       
   }
     return 0;
}

