#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++) 
    cin >> a[i] >> b[i];

    ll ans = 0;
    ll time = 0;
    ll side = 0; 

    for (int i = 0; i < n; ++i)
    {
        ll min = a[i] - time; 
        ll need = side^ b[i];

        if (min % 2 == need)
            ans += min;
        else
            ans += min - 1;

        time = a[i];
        side = b[i];
    }
    ll last= m - time;
    ans += last; 

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
