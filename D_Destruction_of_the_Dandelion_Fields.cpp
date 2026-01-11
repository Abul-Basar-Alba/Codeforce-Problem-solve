#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll even = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            even += x;   
        else
            v.push_back(x);
    }

    ll k = v.size();
    if (k == 0)
    {
        cout << 0 << "\n";
        return;
    }


    rsrt(v);

    ll take = (k + 1) / 2;
    ll odd = 0;
    for (ll i = 0; i < take; i++)
        odd += v[i];

    cout << (even + odd) << "\n";
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
