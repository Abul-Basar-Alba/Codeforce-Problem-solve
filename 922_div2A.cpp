#include <bits/stdc++.h>

using ll = ll;

void solve(ll x, ll y)
{
    y /= 2;
    cout << (x * y) << endl;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll x, y;
        cin >> x >> y;
        solve(x, y);
    }

    return 0;
}
