#include <bits/stdc++.h>
#define LL long long

using namespace std;

LL n,m,k;

bool ok(LL h)
{
    LL temp = (2*h-2)*(h-1)/2;
    if (h-2<=k-1 && h-2 <= n-k)
        return n + temp <= m;
    if (h-2>k-1 && h-2 > n-k)
    {
        temp+=n;
        LL temp1 = (1 + h-2-(k-1))*(h-2-(k-1))/2;
        LL temp2 = (1 + h-2-(n-k))*(h-2-(n-k))/2;
        return temp-temp1-temp2 <= m;
    }
    if (h-2>k-1 && h-2 <= n-k)
    {
        temp+=n;
        LL temp1 = (1 + h-2-(k-1))*(h-2-(k-1))/2;
        return temp-temp1<=m;
    }
    if (h-2<=k-1 && h-2>n-k)
    {
        temp+=n;
        LL temp2 = (1 + h-2-(n-k))*(h-2-(n-k))/2;
        return temp-temp2<=m;
    }
}

int main()
{
    //freopen("F:\\rush.txt","r",stdin);
    cin >> n >> m >>k;
    LL l = 2,r = 1+m-n;
    if (r==1)
        puts("1");
    else
    {
        LL ans = 2;
        while (l <= r)
        {
            LL m = (l+r)>>1;
            if (ok(m))
            {
                ans = m,l = m+1;
            }
            else
                r = m-1;
        }
        cout << ans << endl;
    }
    return 0;
}
