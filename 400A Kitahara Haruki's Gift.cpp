#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int count_1,count_2;
	
	vector<int> v(n);
	vector<int> :: iterator last_it;
	for(int i=0;i<n;++i)
	{
		cin >> v[i];
		if(v[i]==100)
		count_1++;
		else count_2++;
	}
	
	int sum = 100*count_1 + 200*count_2;
	if(sum%200 !=0) cout<< "NO";
    else{
    	
        bool ans = false;
        for (int i = 0; i <= count_2; ++i)
            if (200 * i <= sum/2 && sum/2 - 200 * i <= count_1 * 100) ans = true;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}
