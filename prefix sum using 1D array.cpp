#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int p[N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		p[i]=p[i-1]+a[i];
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin >>l>>r;
		cout << p[r]-p[l-1] << endl;
		
	}
}
