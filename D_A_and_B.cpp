#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;

    auto cal = [&](char ch) 
    {
        vector<ll> pos;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == ch)
                pos.push_back(i);
        }
        ll m = pos.size();
        if (m <= 1)
            return 0LL;

        vector<ll> v(m);
        for (int i = 0; i < m; i++)
            v[i] = pos[i] - i;

        ll med = v[m / 2];
        ll cost = 0;
        for (int i = 0; i < m; i++)
            cost += llabs(v[i] - med);

        return cost;
    };

    ll ans = min(cal('a'), cal('b'));
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


