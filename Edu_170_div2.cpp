// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll q; 
//     cin >> q;

//     while (q--) 
//     {
//         string s,t;
//         cin >> s >> t;
//         if(s.size() > t.size())
//         {
//           swap(s, t);
//         }
//         ll n = s.size(), m = t.size();
//         ll f=0;
//         for(ll i=0;i<m;i++)
//         {
//             if(s[i]!= t[i])
//             {
//                 f = i;
//                 break;
//             }
//         }
//         if(f!=0)
//         n+=(m-f)+1;
//         else if(s==t)
//         {
//             n ++;
//         }
//         else
//         {
//             n += m;
//         }
//         cout << n << "\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int MAXN = 100005;

// dp[n][k] = C[n][k] using WRONG formula
int C[MAXN][101]; // Only compute up to k=100 (optimization)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> n(t), k(t);
    int max_n = 0, max_k = 0;

    for (int i = 0; i < t; ++i) {
        cin >> n[i];
        max_n = max(max_n, n[i]);
    }

    for (int i = 0; i < t; ++i) {
        cin >> k[i];
        max_k = max(max_k, k[i]);
    }

    // Build only up to needed n and k
    for (int i = 0; i <= max_n; ++i) {
        C[i][0] = 1;
        for (int j = 1; j <= min(i, max_k); ++j) {
            C[i][j] = (C[i][j - 1] + C[i - 1][j - 1]) % MOD;
        }
    }

    for (int i = 0; i < t; ++i) {
        cout << C[n[i]][k[i]] << '\n';
    }

    return 0;
}
