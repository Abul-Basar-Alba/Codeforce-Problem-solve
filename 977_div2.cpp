// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//        for (ll i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }
//        sort(a.begin(), a.end());
//         ll ans = a[0];
//         for (ll i = 1; i < n; ++i) 
//         {
//            ans=(ans + a[i]) / 2;    
//         }
//         cout << ans << "\n";
//     }
//     {

//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n,x;
        cin >> n>>x;
        vector<ll> a(n);
       for (ll i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        map<ll, ll> mp;
        for (ll i = 0; i < n; ++i) 
        {
            mp[a[i]]++;
        }
        for (ll i = 0; ; ++i) 
        {
            if(mp[i]==0)
            {
                cout<< i << "\n";
                break;
            }
            else if(mp[i]>1)
            {
                mp[i+x]+= mp[i] - 1;
                mp[i] = 1; // Keep only one occurrence of i
            }
        }
    }
}
