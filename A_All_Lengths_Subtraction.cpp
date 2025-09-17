#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];

    bool ok = true;

    for (ll i = n; i >= 1 && ok; i--)
    {
        bool found = false;
        for (ll j = 0; j + i <= n; j++)
        {
            bool can = true;
            for (ll k = j; k < j + i; k++)
            {
                if (a[k] < 1)
                {
                    can = false;
                    break;
                }
            }
            if (can)
            {
                for (ll k = j; k < j + i; k++) 
                a[k]--;
                found = true;
                break;
            }
        }
        if (!found) ok = false;
    }

    cout << (ok ? "YES\n" : "NO\n");
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
