#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin>>s;
    int n = s.size();
    vector<string> v;
    for(int i=0;i<n-1;i++)
    {
        string p =s;
        if(s[i]=='+' && s[i+1]=='+')
        {
            p[i]='-';
            p[i+1]='-';
        }
        v.push_back(p);
    }
    for(string x : v)
    {
        cout<<x<<" ";
    }
    return 0;
}
