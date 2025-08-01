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



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long total = 0;
        
        if (n < 3) {
            cout << "0\n";
            continue;
        }
        
        for (int k = 2; k < n - 1; ++k) {
            for (int j = 1; j < k; ++j) {
                int threshold1 = a[k] - a[j];
                int threshold2 = a[n - 1] - a[j] - a[k];
                int threshold = max(threshold1, threshold2);
                
                if (threshold < 0) {
                    total += j;
                } else {
                    int low = 0, high = j - 1;
                    int pos = j;
                    while (low <= high) {
                        int mid = (low + high) / 2;
                        if (a[mid] > threshold) {
                            pos = mid;
                            high = mid - 1;
                        } else {
                            low = mid + 1;
                        }
                    }
                    total += (j - pos);
                }
            }
        }
        
        int k_index = n - 1;
        for (int j = 1; j < n - 1; ++j) {
            int threshold = a[k_index] - a[j];
            if (threshold < 0) {
                total += j;
            } else {
                int low = 0, high = j - 1;
                int pos = j;
                while (low <= high) {
                    int mid = (low + high) / 2;
                    if (a[mid] > threshold) {
                        pos = mid;
                        high = mid - 1;
                    } else {
                        low = mid + 1;
                    }
                }
                total += (j - pos);
            }
        }
        
        cout << total << "\n";
    }
    
    return 0;
}