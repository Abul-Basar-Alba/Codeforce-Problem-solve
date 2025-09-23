
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> v(m + 1, LLONG_MAX);

    for (ll i = 0; i < n; i++) 
    {
        ll r, c;
        cin >> r >> c;
        v[r] = min(v[r], c);
    }

    ll total = 0;
    for (ll i = 1; i <= m; i++) 
    {

        total += v[i];
    }

    ll ans = min(total, k);
    cout << ans << "\n";
    return 0;
}
