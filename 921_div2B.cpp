#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, n;
        cin >> x >> n;
        ll ans = 1;

        for (ll i = 1; i * i <= x; ++i) 
        {
            if (x % i == 0) 
            {
                if (x / i >= n) 
                ans = max(ans, i);
                if (x / (x / i) >= n) 
                ans = max(ans, x / i);
            }
        }

        cout << ans << endl;
    }
}
