
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string N = to_string(n);
        cout<<int(n-pow(10,(N.size()-1)))<<"\n";
    }
    return 0;
}


