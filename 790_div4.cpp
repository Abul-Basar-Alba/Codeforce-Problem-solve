
//(E) Eating Queries

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, q;
//         cin >> n >> q;
//         vector<ll> v(n);
//         ll sum = 0;

//         for (int i = 0; i < n; i++) 
//         {
//             cin >> v[i];
//             sum += v[i];
//         }

//         sort(v.rbegin(), v.rend());

//         vector<ll> pre(n);
//         pre[0] = v[0];
//         for (int i = 1; i < n; i++) 
//         {
//             pre[i] = pre[i - 1] + v[i];
//         }

//         while (q--) 
//         {
//             ll x;
//             cin >> x;

//             if (sum < x) 
//             {
//                 cout << -1 << endl; 
//                 continue;
//             }

//             auto it = lower_bound(pre.begin(), pre.end(), x);
//             if (it != pre.end()) 
//             {
//                 cout << (it - pre.begin() + 1) << endl; 
//             } 
//             else 
//             {
//                 cout << -1 << endl; 
//             }
//         }
//     }

//     return 0;
// }


//(D) X-Sum

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<vector<ll>> g(n, vector<ll>(m));
//         for (int i = 0; i < n; i++) 
//         {
//             for (int j = 0; j < m; j++) 
//             {
//                 cin >> g[i][j];
//             }
//         }

//         ll mx = n + m - 1;
//         vector<ll> pri(mx, 0);
//         vector<ll> sec(mx, 0);

//         for (int i = 0; i < n; i++) 
//         {
//             for (int j = 0; j < m; j++) 
//             {
//                 pri[i - j + (m - 1)] += g[i][j];
//                 sec[i + j] += g[i][j];
//             }
//         }

//         ll sum = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             for (int j = 0; j < m; j++) 
//             {
//                 ll cur= pri[i - j + (m - 1)] + sec[i + j] - g[i][j];
//                 sum = max(sum, cur);
//             }
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }


//(D) X-Sum

#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll ll
#define nl '\n'
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
 
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll mx = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll sum = a[i][j];
            
            // upper left diagonal
            for (int ii = i - 1, jj = j - 1; ii >= 0 && jj >= 0; ii--, jj--) {
                sum += a[ii][jj];
            }
            // upper right diagonal
            for (int ii = i - 1, jj = j + 1; ii >= 0 && jj < m; ii--, jj++) {
                sum += a[ii][jj];
            }
            // lower left diagonal
            for (int ii = i + 1, jj = j - 1; ii < n && jj >= 0; ii++, jj--) {
                sum += a[ii][jj];
            }
            // lower right diagonal
            for (int ii = i + 1, jj = j + 1; ii < n && jj < m; ii++, jj++) {
                sum += a[ii][jj];
            }

            mx = max(mx, sum); 
        }
    }

    cout << mx << nl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
