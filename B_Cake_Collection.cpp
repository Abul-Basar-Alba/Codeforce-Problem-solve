#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) 
        cin >> a[i];
        sort(a.rbegin(), a.rend());
        ll k = min(n, m);
        ll ans = 0;
        for (int i = 0; i < k; ++i) 
        {
            ans += a[i] * (m - i);
        }
        cout << ans << '\n';
    }
    return 0;
}
