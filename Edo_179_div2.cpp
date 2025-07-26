// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll x;
//         cin >> x;
        
//         ll bits = 64 - __builtin_clzll(x);
//         ll ans = 2LL * bits + 1;
//         cout << ans << "\n";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// ll bit(ll x) 
// {
//     ll cnt = 0;
//     while (x > 0) 
//     {
//         cnt++;
//         x >>= 1;   
//     }
//     return cnt;
// }

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll x;
//         cin >> x;
        
//         ll bits = bit(x);
//         ll ans = 2LL * bits + 1;
//         cout << ans << "\n";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// struct Platform 
// {
//     ll w, l, h; 
// };

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin >> t;

//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;

//         vector<ll> fib(n+1);
//         fib[1] = 1;
//         fib[2] = 2;
//         for (int i = 3; i <= n; i++) 
//         {
//             fib[i] = fib[i-1] + fib[i-2];
//         }

//         string ans(m, '0');

//         for (int k = 0; k < m; k++) 
//         {
//             ll W, L, H;
//             cin >> W >> L >> H;

//             vector<Platform> platforms;
//             platforms.reserve(2*n + 2);

//             platforms.push_back({W, L, 0});

//             bool ok = true;
            
//             for (int i = n; i >= 1; i--) 
//             {
//                 ll s = fib[i];

//                 ll choose_idx = -1;
//                 ll bestH = INT_MAX;

//                 for (int j = 0; j < (int)platforms.size(); j++) 
//                 {
//                     int pw = platforms[j].w;
//                     int pl = platforms[j].l;
//                     int ph = platforms[j].h;
//                     if (pw >= s && pl >= s && ph + s <= H) 
//                     {
                        
//                         if (ph < bestH) {
//                             bestH = ph;
//                             choose_idx = j;
//                         }
//                     }
//                 }

//                 if (choose_idx < 0) 
//                 {
//                     ok = false;
//                     break;
//                 }

//                 Platform base = platforms[choose_idx];
            
//                 platforms[choose_idx] = platforms.back();
//                 platforms.pop_back();

//                 ll pw = base.w, pl = base.l, ph = base.h;
               
//                 platforms.push_back({s, s, ph + s});

//                 if (pw - s > 0) 
//                 {
//                     platforms.push_back({ pw - s, pl, ph });
//                 }
                
//                 if (pl - s > 0) {
//                     platforms.push_back({ s, pl - s, ph });
//                 }
          
//             }

//             if (ok) {
//                 ans[k]= '1';
//             }
       
//         }

//         cout << ans << "\n";
//     }

//     return 0;
// }


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
//         vector<ll> a(n + 1);
//         vector<vector<ll>> pos(n + 1);

//         for (int i = 1; i <= n; i++) 
//         {
//             cin >> a[i];
//             pos[a[i]].push_back(i);
//         }

//         ll ans = LLONG_MAX;
//         for (int v = 1; v <= n; v++) 
//         {
//             if (pos[v].empty()) 
//             continue;

//             const auto &arr = pos[v];
//             ll best = LLONG_MAX;

//             ll run= 0;  
//             for (int i = 0; i < (int)arr.size(); i++) 
//              {
//               if (i > 0 && arr[i] == arr[i - 1] + 1) 
//               {
//                continue;
//              }

//                if (i > 0) 
//               {
//              ll L = run;
//              ll R = i - 1;

//              ll left_gap = (arr[L] - 1);
//              ll right_gap = (n - arr[R]);
//             ll cost = (left_gap + right_gap) * (ll)v;
//            best = min(best, cost);
//            }

//         run = i;
//      }

          
//             {
//                 int L = run;
//                 int R = (int)arr.size() - 1;
//                 ll left_gap   = (arr[L] - 1);
//                 ll right_gap  = (n - arr[R]);
//                 ll cost = (left_gap + right_gap) * (ll)v;
//                 best = min(best, cost);
//             }

//             ans = min(ans, best);
//         }

//         cout << ans << "\n";
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool allSame = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            cout << "0\n";
            continue;
        }

        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[a[i]].push_back(i + 1);
        }

        ll ans = 1e18;
        for (int x = 1; x <= n; x++) {
            if (pos[x].empty()) continue;

            vector<vector<int>> segments;
            vector<int> current;
            current.push_back(pos[x][0]);
            for (int j = 1; j < pos[x].size(); j++) {
                if (pos[x][j] == pos[x][j - 1] + 1) {
                    current.push_back(pos[x][j]);
                } else {
                    segments.push_back(current);
                    current = {pos[x][j]};
                }
            }
            segments.push_back(current);

            ll candidate_ans = (ll)(n - 1) * x;
            for (const vector<int>& seg : segments) {
                int L = seg[0];
                int R = seg.back();
                ll cost_seg = (ll)x * ((L - 1) + (n - R));
                if (cost_seg < candidate_ans) {
                    candidate_ans = cost_seg;
                }
            }
            if (candidate_ans < ans) {
                ans = candidate_ans;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}