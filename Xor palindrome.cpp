#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l;
	    string s;
	    cin>>l>>s;
	    int z=0,o=0;
	    for(char x :s)
	    {
	        if(x=='0')z++;
	        else o++;
	    }
	    if(l%2==0)
	    {
	        if(o==z || (z%2==0 && o%2==0)){
	            
	            cout<<"Yes"<<"\n";
	        }
	        else cout<<"no"<<"\n";
	    }
	    else cout<<"Yes"<<"\n";
	    
	    
	}
	return 0;
}

