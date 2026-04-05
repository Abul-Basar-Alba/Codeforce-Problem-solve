#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() 
{
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++) 
    {
        cout << i << " " << (n + 2*i - 1) << " " << (n + 2*i) << " ";
    }
    cout << '\n';
}

int main()
{    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}