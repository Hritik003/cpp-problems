#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
            int i=1;
    while(t--)
    {
        string s;

        cin>>s;
        int n = s.length();
        unordered_map<char,int> hash;
        hash['a']++;
        hash['e']++;
        hash['o']++;
        hash['i']++;
        hash['u']++;
        if(hash[s[n-1]]>0) {
            cout<<"Case #"<<i<<":"<<" "<<s<<" is ruled by Alice."<<"\n";
            
        }
        else if(hash[s[n-1]]==0 && s[n-1]!='y') {
            cout<<"Case #"<<i<<":"<<" "<<s<<" is ruled by Bob."<<"\n";
           
        }
        else {
            cout<<"Case #"<<i<<":"<<" "<<s<<" is ruled by nobody."<<"\n";
            
        }
        i++;
    }
}
