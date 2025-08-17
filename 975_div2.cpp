#include <bits/stdc++.h>
using namespace std;
using ll = ll int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll e=0,odd=0;
        ll mx1=0,mx2=0;
        ll mx=0;
        for (ll i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if(i% 2 == 0)
            {
                mx1=max(mx1,a[i]);
                e++;
            }
            else
            {
                mx2=max(mx2,a[i]);
                odd++;
            }
        }
        mx=max(mx1+e,mx2+odd);
        cout << mx << "\n";
    }
}


