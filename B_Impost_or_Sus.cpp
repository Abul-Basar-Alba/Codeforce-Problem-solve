#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) 
    {
        string r;
        cin >> r;
        ll n = r.size();
        ll ans = 0;
        if (r[0] == 'u') 
        { 
            r[0] = 's'; 
            ans++; 
        }
        if (r[n-1] == 'u') 
        { 
            r[n-1] = 's'; 
            ans++; 
        }
        vector<ll> pos;
        for (int i = 0; i < n; i++) 
        if (r[i] == 's') 
        pos.push_back(i);
        for (ll i = 0; i < pos.size() - 1; i++)
         {
            ll d = pos[i+1] - pos[i];
            if (d > 2) 
            ans += (d - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
