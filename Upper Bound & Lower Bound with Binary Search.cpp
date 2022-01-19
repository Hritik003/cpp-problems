#include<bits/stdc++.h>
using namespace std;


int lowerbound(vector<int> &v, int element)
{
	int high=v.size()-1, low =0,mid;
	while(high - low >1)
	{
		mid = (high +low)/2;
		if(v[mid]<element)
		{
			low = mid+1;
		}
		if(v[mid]> element)
		{
			high = mid;
		}
	}
	if(v[low]>=element)
	{
		return low;
	}
	if(v[high]>=element)
	{
		return high;
	}
	else return -1;
}
int upperbound(vector<int> &v, int element)
{
	int high=v.size()-1, low =0,mid;
	while(high - low >1)
	{
		mid = (high +low)/2;
		if(v[mid]<=element)
		{
			low = mid+1;
		}
		if(v[mid]>= element)
		{
			high = mid;
		}
	}
	if(v[low]>element)
	{
		return low;
	}
	if(v[high]>element)
	{
		return high;
	}
	else return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;++i)
	{
		cin>>v[i];
	}
	int element;
	cin >> element;
	int lb = lowerbound(v, element);;
	int ub = upperbound( v, element);
}
