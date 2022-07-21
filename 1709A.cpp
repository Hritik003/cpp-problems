#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(3);
        for(int i=0;i<3;++i){
            cin>>v[i];
        }
        int i = v[n-1];
        if(v[n-1]==0 || v[i-1]==0){
           cout<<"NO"<<"\n";
        }
        else {
            cout<<"YES"<<"\n";
        }
        
    }
 
    return 0;
}
 
