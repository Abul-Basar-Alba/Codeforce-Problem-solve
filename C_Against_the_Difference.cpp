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
        ll n;
        cin >> n;
        vector<ll> a(n), p(n);
        vector<vector<ll>> v(n+1);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            p[i] = v[a[i]].size() + 1; 
            v[a[i]].push_back(i);     
        }

        vector<ll> f(n+1, 0);
        for (int i = 1; i <= n; i++) 
        {
            f[i] = f[i-1]; 

            ll x = a[i-1];
            if (p[i-1] >= x) 
            {
                ll j = v[x][p[i-1]-x];
                f[i] = max(f[i], f[j] + x);
            }
        }

        cout << f[n] << "\n";
    }
}
