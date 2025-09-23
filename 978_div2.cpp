
// #include <bits/stdc++.h>
// using namespace std;
// typedef ll int ll;

// void solve(void)
// {
//     ll n, r;
//     cin >> n >> r;
//     ll ans = 0, cnt = 0;

//     while (n--)
//     {
//         ll x;
//         cin >> x;

//         ans += (x / 2) * 2; 
//         r -= x / 2;       

//         cnt += (x % 2);
//     }

//     if (r >= cnt)
//         ans += cnt;
//     else
//     {
//         cnt -= r;
//         ans += (r - cnt); 
//     }

//     cout << ans << '\n';
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    cin >> t;

    while (t--) 
    {
        ll n,x;
        cin >> n >> x;
        ll cnt=0,mx=0;
        for (ll i = 0; i < n; i++) 
        {
            ll a;
            cin >> a;
            cnt+=a;
            mx = max(mx, a);
        }
        cnt= (cnt + x - 1) / x;
        mx=max(mx, cnt);
        cout << mx << "\n";

    }
  
    return 0;
}
