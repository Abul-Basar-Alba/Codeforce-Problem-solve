#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    const ll M = 1000000000LL - 1; 
    while (t--) 
    {
        ll x;
        cin >> x;
        ll y = M - x;
        cout << y << '\n';
    }
    return 0;
}
