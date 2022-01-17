#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n;
    int a=0,b=0;
	vector< int > v(n);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>v[i];
		if(v[i]>0)
		{
		    a= a + v[i];
		}
		else
		{
			b = b + v[i];
		}
	}
	cout<< a-b << endl;	
}
