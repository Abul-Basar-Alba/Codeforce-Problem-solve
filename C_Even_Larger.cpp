
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
    ll s = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            s += a[i];
        else
            s -= a[i];
        pref[i] = s;
    }

    vector<ll> odd_idx, cap;
    for (ll i = 1; i <= n; i += 2)
    {
        odd_idx.push_back(i);
        cap.push_back(a[i]);
    }

    ll ptr = 0;
    auto advance = [&](ll limit)
    {
        while (ptr < (ll)odd_idx.size() && cap[ptr] == 0)
            ptr++;
    };

    ll total_dec = 0, ans = 0;
    vector<ll> final_pref(n + 1, 0), mx(n + 1, 0);
    final_pref[0] = 0;
    mx[0] = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll cur = pref[i] + total_dec;
        if (i >= 2)
        {
            ll need = mx[i - 2];
            if (cur < need)
            {
                ll delta = need - cur;
                advance(i);
                while (delta > 0)
                {
                    while (ptr < (ll)odd_idx.size() && (cap[ptr] == 0 || odd_idx[ptr] > i))
                    {
                        if (cap[ptr] == 0)
                            ptr++;
                        else
                            break;
                    }
                    if (ptr >= (ll)odd_idx.size() || odd_idx[ptr] > i)
                        break; 
                    ll take = min(cap[ptr], delta);
                    cap[ptr] -= take;
                    total_dec += take;
                    ans += take;
                    delta -= take;
                    if (cap[ptr] == 0)
                        ptr++;
                }
                cur = need;
            }
        }
        final_pref[i] = cur;
        mx[i] = max(mx[i - 1], final_pref[i]);
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
        solve();
    }
    return 0;
}
