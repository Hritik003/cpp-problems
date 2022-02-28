
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag =0;
        string haystack, needle;
        unordered_map<char,int> hash;
        string base;
        cin>>haystack>>needle;
        sort(needle.begin(),needle.end());
        for(char x : needle)
        {
            hash[x]++;
        }
        for(int i=0;i<haystack.length();i++)
        {
            if(hash[haystack[i]]>=1)
            {
                base= haystack.substr(i,needle.length());
                sort(base.begin(),base.end());
                if(base == needle)
                {
                    flag =1;
                    break;
                }
            }
            
        }
        if(flag==1)
        {
            cout<<"yes"<<"\n";
        }
        else 
        cout<<"No"<<"\n";
    }

    return 0;
}
