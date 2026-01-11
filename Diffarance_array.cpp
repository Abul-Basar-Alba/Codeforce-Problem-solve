//Diffarance array approach
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    const  ll N = 200000; 
    vector<ll> diff(N + 5, 0);

    while (t--) 
    {
        ll n;
        cin >> n;
        ll maxr = 0;

        for (ll i = 0; i < n; i++) 
        {
            ll l, r;
            cin >> l >> r;
            diff[l] += 1;
            if (r + 1 <= N + 2) 
            diff[r + 1] -= 1;
            maxr = max(maxr, r);
        }

        ll cur = 0, ans = 0;
        for (ll i = 0; i <= maxr + 1; i++) 
        {
            cur += diff[i];
            ans = max(ans, cur);
        }

        cout << ans << "\n";

        for (ll i = 0; i <= maxr + 1; i++) 
        {
            diff[i] = 0;
        }
    }

    return 0;
}
