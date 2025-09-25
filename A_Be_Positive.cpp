#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];

    ll neg = 0, zero = 0;

    for (ll x : a)
    {
        if (x == -1) 
        neg++;
        else if (x == 0) 
        zero++;
    }

    ll ans = zero + 2 * (neg % 2);
    cout << ans << "\n";
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
