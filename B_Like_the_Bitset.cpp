#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll cnt = 0;
    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
            if (cnt >= k)
                ok = false;
        }
        else
        {
            cnt = 0;
        }
    }

    if (!ok)
    {
        cout << "NO\n";
        return;
    }

    vector<ll> p(n);
    ll l = 1;    
    ll r = n;    

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            p[i] = l++;
        }
        else
        {
            p[i] = r--;
        }
    }

    cout << "YES\n";
    for (ll i = 0; i < n; i++)
        cout << p[i] << " ";
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
