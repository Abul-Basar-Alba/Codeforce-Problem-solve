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
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) 
    cin >> b[i];

    vector<vector<ll>> pos(n + 1);
    for (ll i = 0; i < n; i++) 
    {
        pos[b[i]].push_back(i);
    }

    bool ok = true;
    vector<ll> a(n);
    ll next = 1;

    for (ll v = 1; v <= n; v++) 
    {
        if (pos[v].empty()) 
        continue;
        if (pos[v].size() % v != 0) 
        {
            ok = false;
            break;
        }
        for (ll i = 0; i < pos[v].size(); i += v) 
{
            for (ll j = 0; j < v; j++) 
            {
                a[pos[v][i+j]] = next;
            }
            next++;
        }
    }

    if (!ok) 
    {
        cout << -1 << "\n";
    }
    else 
    {
        for (ll i = 0; i < n; i++) 
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
