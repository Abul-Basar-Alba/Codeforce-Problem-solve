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
    set<ll> st; 
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    ll k = st.size();
    ll ans = 2 * k - 1; 
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
        solve();
    }
    return 0;
}
