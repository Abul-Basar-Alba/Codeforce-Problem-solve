

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         ll total = 0;
//         ll zero = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             ll x;
//             cin >> x;
//             total += x;
//             if (x == 0) 
//             zero++;
//         }
//         total += zero;
//         cout << total << '\n';
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, s;
//         cin >> n >> s;
//         vector<ll> a(n);
//         ll c0 = 0, c1 = 0, c2 = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//             if (a[i] == 0) 
//             c0++;
//             else if (a[i] == 1) 
//             c1++;
//             else if (a[i] == 2) 
//             c2++;
//         }

//         ll sum = c1 + 2 * c2;
//         ll x = s - sum;

//         if (x < 0) 
//         {
//             vector<ll> ans;
//             for (int i = 0; i < c0; i++) 
//             ans.push_back(0);
//             for (int i = 0; i < c1; i++) 
//             ans.push_back(1);
//             for (int i = 0; i < c2; i++) 
//             ans.push_back(2);
//             for (int i = 0; i < ans.size(); i++) 
//             {
//                 if (i > 0) 
//                 cout << " ";
//                 cout << ans[i];
//             }
//             cout << endl;
//         } 
//         else if (x == 0) 
//         {
//             cout << -1 << endl;
//         } 
//         else 
//         {
//             if (x == 1) 
//             {
//                 vector<ll> ans;
//                 for (int i = 0; i < c0; i++) 
//                 ans.push_back(0);
//                 ans.push_back(2);
//                 for (int i = 0; i < c1; i++) 
//                 ans.push_back(1);
//                 for (int i = 0; i < c2 - 1; i++) 
//                 ans.push_back(2);
//                 for (int i = 0; i < ans.size(); i++) 
//                 {
//                     if (i > 0) 
//                     cout << " ";
//                     cout << ans[i];
//                 }
//                 cout << endl;
//             } 
//             else 
//             {
//                 cout << -1 << endl;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        map<ll,ll> mp, idx;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;

            if (mp[a[i].first] < a[i].second) 
            {
              mp[a[i].first] = a[i].second;
              idx[a[i].first] = i + 1;
            }
        }

        set<ll> st;
        for (auto it : idx)
        {
            st.insert(it.second);
        }

        cout << st.size() << '\n';
        for (auto i : st)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
