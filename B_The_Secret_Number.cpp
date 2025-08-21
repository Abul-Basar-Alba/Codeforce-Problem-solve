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

    vector<ll> ans;

    for (ll k = 1; k <= 18; k++) 
    {
        ll d = 1;
        for (ll i = 0; i < k; i++) 
        d *= 10; 
        ll div = 1 + d;                    

        if (n % div == 0) 
        {
            ll x = n / div;
            if (x > 0) 
            {
                ans.push_back(x);
            }
        }
    }

    if (ans.empty())
    {
        cout << 0 << "\n";
        return;
    }

    srt(ans); 
    cout << ans.size() << "\n";
    for (ll x : ans)
        cout << x << " ";
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
        Basar();
    }
    return 0;
}
