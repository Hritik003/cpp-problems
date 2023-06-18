#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pos=0,neg=0,ans=0;
        while(n--){
            int x;
            cin>>x;
            if(x==1)++pos;
            else ++neg;
        }
        
        while(!(pos-neg>=0&&neg%2==0)){++pos;--neg;++ans;}
        cout<<ans<<endl;
    }
}
