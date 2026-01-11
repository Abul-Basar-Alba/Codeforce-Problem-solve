// #include <bits/stdc++.h>
// using ll = long long;
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n), s, r;
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }

//         bool ok = false;
//         for (int i = 0; i < n - 1; i++) 
//         {
//             if (abs(a[i] - a[i + 1]) <= 1) 
//             {
//                 ok = true;
//                 break;
//             }
//         }

//         if (ok) 
//         {
//             cout << 0 << '\n';
//             continue;
//         }

//         if (n == 2) 
//         {
//             if (abs(a[0] - a[1]) <= 1)
//                 cout << 0 << '\n';  
//             else
//                 cout << -1 << '\n';
//             continue;
//         }

//         s = a;
//         r = a;
//         sort(s.begin(), s.end());
//         sort(r.rbegin(), r.rend());

//         if (s == a || r == a)
//             cout << -1 << '\n';
//         else
//             cout << 1 << '\n';
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

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
//         for (ll i = 0; i < n; ++i)
//             cin >> a[i];

//         sort(a.begin(), a.end());
//         ll cnt = 0;
//         ll last = a[n - 1];

//         for (ll i = 0; i < n; ++i) 
//         {
//             for (ll j = i + 1; j < n; ++j) 
//             {
//                 ll sum_two = a[i] + a[j];

//                 ll min_k_val = last - sum_two + 1;
//                 ll max_k_val = sum_two - 1;

//                 if (min_k_val > max_k_val) 
//                 continue;

//                 auto lower = lower_bound(a.begin() + j + 1, a.end(), min_k_val);
//                 auto upper = upper_bound(a.begin() + j + 1, a.end(), max_k_val);

//                 cnt += (upper - lower);
//             }
//         }

//         cout << cnt << '\n';
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

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
//         for (ll i = 0; i < n; ++i)
//             cin >> a[i];

//         sort(a.begin(), a.end());
//         ll cnt = 0;
//         ll last = a[n - 1];

//         for (ll i = 0; i < n; ++i) 
//         {
//             for (ll j = i + 1; j < n; ++j) 
//             {
//                 ll sum_two = a[i] + a[j];

//                 ll min_k_val = last - sum_two + 1;
//                 ll max_k_val = sum_two - 1;

//                 if (min_k_val > max_k_val)
//                     continue;

                
//                 ll l = j + 1, r = n - 1;
//                 ll lower = n; 
//                 while (l <= r) 
//                 {
//                     ll mid = (l + r) / 2;
//                     if (a[mid] >= min_k_val) 
//                     {
//                         lower = mid;
//                         r = mid - 1;
//                     } 
//                     else 
//                     {
//                         l = mid + 1;
//                     }
//                 }

//                 l = j + 1, r = n - 1;
//                 ll upper = n;
//                 while (l <= r) 
//                 {
//                     ll mid = (l + r) / 2;
//                     if (a[mid] > max_k_val) 
//                     {
//                         upper = mid;
//                         r = mid - 1;
//                     } 
//                     else 
//                     {
//                         l = mid + 1;
//                     }
//                 }

//                 cnt += max(0LL, upper - lower);
//             }
//         }

//         cout << cnt << '\n';
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());

        ll cnt = 0;
        ll mx = a[n - 1];

       
        for (int i = 2; i < n; ++i) 
        {
            ll z = max(2LL * a[i], mx) - a[i];

            int l = 0, r = i - 1;

            while (l < r) 
            {
                ll sum = a[l] + a[r];

                if (sum > z) 
                {
                    cnt += (r - l); 
                    r--;
                } 
                else 
                {
                    l++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
