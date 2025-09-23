#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
        cin >> a[i];

        ll m = *min_element(a.begin(), a.end());
        ll cnt = 0;
        for (auto &x : a) 
        if (x == m) cnt++;

        if (cnt >= 2) 
        {
            cout << "Yes\n";
            continue;
        }

        vector<ll> v;
        for (auto &x : a) 
        {
            if (x != m && x % m == 0) 
            v.push_back(x);
        }

        if (v.empty()) 
        {
            cout << "No\n";
            continue;
        }

        ll gcd = v[0];
        for (ll i = 1; i < v.size(); i++) 
        {
            gcd = std::gcd(gcd, v[i]);
            if (gcd == m) 
            break;
        }

        if (gcd == m) 
        cout << "Yes\n";
        else 
        cout << "No\n";
    }

    return 0;
}
