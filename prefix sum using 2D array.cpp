#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N][N];
long long  p[N][N];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<=n;++j)
		{
		cin>>a[i][j];
		p[i][j]=p[i-1][j]+p[i][j-1]+a[i][j]-p[i-1][j-1];
	}
	}
	
	int q;
	cin>>q;
	while(q--)
	{
		int a,b,c,d;
		cin >>a>>b>>c>>d;
		cout << p[c][d]-p[a-1][d]-p[c][b-1]+p[a-1][b-1] << endl;
		
	}
}
