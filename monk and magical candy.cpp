#include<iostream>
#include<set>
using namespace std;

int main()
{



	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		multiset<long long> bag;
		multiset<long long> :: iterator last_it;
		for(int i=0;i<n;i++){
			long long candy_ct;
			cin>>candy_ct;
			bag.insert(candy_ct);
		}
		long long total_candy_ct=0;

		for(int i=0;i<k;i++)
		{
			 last_it = (--bag.end());
			long long candy_ct = (*last_it);
			total_candy_ct+= candy_ct;
			bag.erase(last_it);
			bag.insert(candy_ct /2);
		}
		cout << total_candy_ct<<endl;	

	}
}
