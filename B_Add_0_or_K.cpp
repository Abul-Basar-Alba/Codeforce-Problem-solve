#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll modinv(ll a, ll m)
{
    ll x, y;
    ll g = egcd(a, m, x, y);
    if (g != 1) return -1;
    x %= m;
    if (x < 0) x += m;
    return x;
}

bool is_prime(ll x)
{
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2;
    for (ll d = 3; d * d <= x; d += 2)
        if (x % d == 0) return false;
    return true;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll p = -1;
    ll limit = k + 1;
    ll cap = 200000;
    ll upper = min(limit, cap);
    for (ll cand = 2; cand <= upper; cand++)
    {
        if (is_prime(cand) && (k % cand != 0))
        {
            p = cand;
            break;
        }
    }
    if (p == -1 && limit > cap && is_prime(limit) && (k % limit != 0))
        p = limit;

    if (p == -1)
    {
        for (ll cand : {2LL, 3LL, 5LL, 7LL, 11LL, 13LL, 17LL, 19LL, 23LL, 29LL})
        {
            if (cand <= limit && is_prime(cand) && (k % cand != 0))
            {
                p = cand;
                break;
            }
        }
    }

    ll km = k % p;
    ll inv = modinv(km, p);

    for (ll i = 0; i < n; i++)
    {
        ll ai_mod = a[i] % p;
        ll need = (p - ai_mod) % p;
        ll m = (need * inv) % p; 
        a[i] += m * k;
    }

    for (ll i = 0; i < n; i++)
    {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
