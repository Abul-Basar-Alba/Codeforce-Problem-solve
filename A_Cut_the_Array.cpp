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
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) 
    cin >> a[i];

    vector<ll> pref(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        pref[i] = (pref[i - 1] + a[i]) % 3;
    }

    ll l = 0, r = 0;
    bool ok= false;

    for (ll i = 1; i <= n - 2 && !ok; i++)
    {
        for (ll j = i + 1; j <= n - 1 && !ok; j++)
        {
            ll s1 = pref[i];
            ll s2 = (pref[j] - pref[i]) % 3;
            if (s2 < 0) 
            s2 += 3;
            ll s3 = (pref[n] - pref[j]) % 3;
            if (s3 < 0) 
            s3 += 3;

            if (s1 == s2 && s2 == s3)
            {
                l = i, r = j;
                ok = true;
            }
            else if (s1 != s2 && s1 != s3 && s2 != s3)
            {
                l = i, r = j;
                ok = true;
            }
        }
    }

    if (ok)
        cout << l << " " << r << "\n";
    else
        cout << "0 0\n";
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
