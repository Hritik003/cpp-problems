#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string zero;
        for(long long i=1;i<=b.size()-a.size();i++){
            zero+='0';
        }
        a=a+zero;
        while(a.size()&&b.size()&& a[0]==b[0]){
            a.erase(a.begin());
            b.erase(b.begin());
        }
        if(!a.empty())cout<<(a.size()-1)*9 + (b[0]-a[0])<<endl;
        else cout<<"0\n";
    }
}
