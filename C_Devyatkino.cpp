#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

bool seven(ll x) 
{
    while (x > 0) 
    {
        if (x % 10 == 7) 
        return true;
        x /= 10;
    }
    return false;
}

void Basar()
{
    ll n;
    cin >> n;

    if (seven(n)) 
    {
        cout << 0 << "\n";
        return;
    }

    ll ans = 1e9; 
    for (ll i = 9; i <= 1000000000; i = i * 10 + 9) 
    {
        for (ll k = 1; k <= 20; k++) 
        {
            ll val = n + i * k;
            if (seven(val)) 
            {
                ans = min(ans, k);
                break; 
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
