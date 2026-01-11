#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--) 
    {
        ll n; 
        cin >> n;
        vector<ll> a(n+1), b(n+1);
        ll T = 0;
        for (int i = 1; i <= n; ++i) 
        { 
            cin >> a[i]; 
            T ^= a[i]; 
        }
        for (int i = 1; i <= n; ++i) 
        { 
            cin >> b[i]; 
            T ^= b[i]; 
        }

        if (T == 0) 
        {
            cout << "Tie\n";
            continue;
        }
        ll msb = 0;
        for (int bit = 30; bit >= 0; --bit) 
        {
            if ( (T >> bit) & 1 ) 
            { 
                msb = bit; 
                break; 
            }
        }

        for (int i = n; i >= 1; --i) 
        {
            if ( ((a[i] ^ b[i]) >> msb) & 1 ) 
            {
                if (i % 2 == 1) 
                cout << "Ajisai\n";
                else 
                cout << "Mai\n";
                break;
            }
        }
    }
    return 0;
}
