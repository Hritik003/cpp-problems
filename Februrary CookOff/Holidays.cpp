#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,w,i;cin>>n>>w;
    int a[n];
    int sum =0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--){
        sum+=a[i];
        if(w<=sum){
            break;
        }
    }
    int TIH=i;
    cout<<TIH<<endl;
    return 0;
}


int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
