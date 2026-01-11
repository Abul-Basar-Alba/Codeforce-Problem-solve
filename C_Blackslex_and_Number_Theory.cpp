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
        for(int i=0;i<n;i++) 
        cin >> a[i];
        ll m = *min_element(a.begin(), a.end());
        ll d = LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            if (a[i] != m) 
            d = min(d, a[i] - m);
        }
        
        cout << max(m, d) << '\n';
    }
}
