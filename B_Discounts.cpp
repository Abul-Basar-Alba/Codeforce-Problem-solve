#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for (ll i = 1; i <= n; i++) 
    cin >> a[i];

    vector<ll> b(k);
    for (ll i = 0; i < k; i++) 
    cin >> b[i];

    srt(a);
    srt(b); 

    ll ans = 0;
    for (ll i = 1; i <= n; i++) 
    ans += a[i];

    ll id = n + 1;
    for (ll i = 0; i < k; i++) 
    {
        id -= b[i];
        if (id >= 1) 
        ans -= a[id];
    }

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
        Basar();
    }
    return 0;
}
