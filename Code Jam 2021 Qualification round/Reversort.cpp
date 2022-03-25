#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> v(n);
        for(int x: v)
        {
            cin>>x;
            x--;
        }
        for(int i=0;i<=v.size()-1;i++)
        {
            int j = i;
            while(v[j] != i) {
                j++;
            }
             c=c+(j-i+1);
            reverse(v.begin()+i,v.begin()+j+1);
           
        }
        cout<<c-1<<endl;
    }
    return 0;
}
