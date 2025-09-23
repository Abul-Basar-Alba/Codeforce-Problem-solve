#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll bb = b;
    ll v2 = 0;
    while (bb % 2 == 0)
    { 
        bb /= 2; 
        v2++; 
    }

    ll ans = -1;
    if (a % 2 == 0) 
    {
        if (v2 == 0) 
            ans = -1;
        else 
            ans = a * (b / 2) + 2;
    } 
    else 
    {
        if (v2 == 0) 
            ans = a * b + 1;
        else if (v2 == 1) 
            ans = -1;
        else 
            ans = a * (b / 2) + 2;
    }

    cout << ans << '\n';
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
