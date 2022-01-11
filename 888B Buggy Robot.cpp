#include<bits/stdc++.h>
using namespace std;
int main()
{
	    int n;
	    string s;
	    cin>> n >>s;
	    int dx=0,dy=0;
	    for(int i=0;i<n;++i)
	    {
	    	if(s[i]=='U')
	    	{
	    		dy++;
			}
			if(s[i]=='L')
	    	{
	    		dy--;
			}
			if(s[i]=='R')
	    	{
	    		dx++;
			}
			if(s[i]=='L')
	    	{
	    		dx--;
			}
		}
		int sum = abs(dx)+abs(dy);
		cout << n-sum;
	
}
