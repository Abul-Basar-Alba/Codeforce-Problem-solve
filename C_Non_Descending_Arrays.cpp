#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;
const ll MOD = 998244353;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];
    for (ll i = 0; i < n; i++) 
    cin >> b[i];

    ll dp0 = 1, dp1 = 1;

    for (ll i = 1; i < n; i++) 
    {
        ll nd0 = 0, nd1 = 0;

        if (a[i-1] <= a[i] && b[i-1] <= b[i]) 
        nd0 = (nd0 + dp0) % MOD;
        if (b[i-1] <= a[i] && a[i-1] <= b[i])
        nd0 = (nd0 + dp1) % MOD;

        if (a[i-1] <= b[i] && b[i-1] <= a[i]) 
        nd1 = (nd1 + dp0) % MOD;
        if (b[i-1] <= b[i] && a[i-1] <= a[i]) 
        nd1 = (nd1 + dp1) % MOD;

        dp0 = nd0;
        dp1 = nd1;
    }

    cout << (dp0 + dp1) % MOD << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
