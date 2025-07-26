#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k, h;
        cin >> n >> m >> k >> h;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll res = 0;
        for (int idx = 0; idx < n; idx++)
        {
            ll f = 0;
            for (int i = 1; i <= m; i++)
            {
                for (int j = i + 1; j <= m; j++)
                {
                    ll x = abs(j - i) * k;
                    ll s = abs(a[idx] - h);
                    if (x == s)
                        f = 1;
                }
            }
            res += f;
        }
        cout << res << endl;
    }
    return 0;
}
