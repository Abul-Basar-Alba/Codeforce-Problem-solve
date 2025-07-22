// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         ll mx = *max_element(a.begin(), a.end());
//         ll mn = *min_element(a.begin(), a.end());
//         cout << (mx - mn) << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        ll mx = *max_element(a.begin(), a.end());
        ll mn = *min_element(a.begin(), a.end());
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll x=__gcd(mn+a[i],mx+a[i]);
            ans=max(x,ans);
        }
       
        cout << ans << "\n";
    }
    return 0;
}