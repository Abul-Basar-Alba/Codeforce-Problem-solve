#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> freq(n + 1, 0); 

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (0 <= x && x <= n) 
        freq[x]++;
    }

    ll miss = 0;
    for (ll i = 0; i < k; i++)
    {
        if (freq[i] == 0) 
        miss++;
    }

    ll cntk = freq[k];

    cout << max(miss, cntk) << "\n";
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
