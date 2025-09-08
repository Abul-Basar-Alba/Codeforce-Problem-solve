
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
    vector<ll> p(n);
    for (ll i = 0; i < n; i++) 
    cin >> p[i];

    for (ll i = 0; i < n; i++) 
    {
        ll q = (n + 1) - p[i];
        if (i) 
        {
            cout << ' ';
        }
        cout << q;
    }
    cout << '\n';
    
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