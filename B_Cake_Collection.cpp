#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
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