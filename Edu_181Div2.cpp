#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;

        string f="";
        string t="";
        string other;

        for (char c : s) {
            if (c == 'T') {
                t+='T';
            } else if (c == 'F') {
                f+='F';
            } else {
                other += c;
            }
        }

        string result = t + other + f;
        cout << result << '\n';
    }

    return 0;
}


// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
//  {
//     ll t;
//     cin >> t;
//     vector<ll> primes = {2, 3, 5, 7};
//     while (t--) 
//     {
//         ll l, r;
//         cin >> l >> r;
//         ll total = r - l + 1;
//         ll bad = 0;
//         for (int mask = 1; mask < (1 << 4); mask++) 
//         {
//             ll lcm = 1;
//             ll cnt = 0;
//             for (int i = 0; i < 4; i++)
//              {
//                 if (mask & (1 << i)) 
//                 {
//                     cnt++;
//                     lcm *= primes[i];
//                 }
//             }
//             ll multiples = (r / lcm) - ((l - 1) / lcm);
//             if (cnt % 2 == 1) 
//             {
//                 bad += multiples;
//             } 
//             else 
//             {
//                 bad -= multiples;
//             }
//         }
//         ll good = total - bad;
//         cout << good << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll t;
//     cin >> t;

//     while (t--) 
//     {
//         ll a, b, k;
//         cin >> a >> b >> k;

//         ll g = __gcd(a, b); 
//         ll dx = a / g;
//         ll dy = b / g;

//         if (dx <= k && dy <= k)
//             cout << "1\n"; 
//         else
//             cout << "2\n"; 
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// const ll mod = 998244353;

// ll modpow(ll base, ll exp) 
// {
//     base %= mod;
//     long long result = 1;
//     while (exp > 0) 
//     {
//         if (exp & 1) 
//             result = (result * base) % mod;
//         base = (base * base) % mod;
//         exp >>= 1;
//     }
//     return result;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, m;
//     cin >> n >> m;
//     vector<vector<pair<ll, ll>>> events(m+1);

//     ll A = 1;
//     for (int i = 0; i < n; i++) 
//     {
//         ll l, r;
//         ll p, q;
//         cin >> l >> r >> p >> q;

//         ll term = (q - p) % mod;
//         if (term < 0) term += mod;
//         term = term * modpow(q, mod-2) % mod;
//         A = A * term % mod;

//         ll denom = (q - p) % mod;
//         if (denom < 0) denom += mod;
//         ll factor_seg = p * modpow(denom, mod-2) % mod;

//         events[r].push_back({l, factor_seg});
//     }

//     vector<ll> dp(m+1, 0);
//     dp[0] = 1;
//     for (int i = 1; i <= m; i++) 
//     {
//         ll total = 0;
//         for (auto seg : events[i]) 
//         {
//             ll l = seg.first;
//             ll fac = seg.second;
//             if (l-1 >= 0) 
//             {
//                 total = (total + dp[l-1] * fac) % mod;
//             }
//         }
//         dp[i] = total;
//     }

//     ll ans = A * dp[m] % mod;
//     if (ans < 0) ans += mod;
//     cout << ans << endl;

//     return 0;
// }