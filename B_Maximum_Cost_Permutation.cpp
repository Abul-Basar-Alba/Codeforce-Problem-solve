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
    vector<ll> p(n + 1);
    vector<char> v(n + 1, 0);

    ll zero = 0, pos = -1;

    for (ll i = 1; i <= n; i++)
    {
        cin >> p[i];
        if (p[i] == 0)
        {
            zero++;
            pos = i;
        }
        else
        {
            v[p[i]] = 1; 
        }
    }

    vector<ll> res; 
    for (ll i = 1; i <= n; i++)
    {
        if (p[i] == 0 || p[i] != i)
        {
            res.push_back(i);
        }
    }

    if (res.empty())
    {
        cout << 0 << "\n";
        return;
    }

    if (zero == 1 && v[pos] == 0)
    {
        auto it = find(all(res), pos);
        if (it != res.end())
            res.erase(it);
    }

    if (res.empty())
    {
        cout << 0 << "\n";
    }
    else
    {
        ll ans = res.back() - res.front() + 1;
        cout << ans << "\n";
    }
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
