// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> v(n-2); 
        
//         for(int i = 0; i < n-2; i++) 
//         {
//             cin >> v[i];
//         }

//         bool ok = true;
//         for (int i = 0; i + 2 < v.size(); i++) 
//         {
//             if (v[i] == 1 && v[i+1] == 0 && v[i+2] == 1) 
//             {
//                 ok = false;
//                 break;
//             }
//         }

//         cout << (ok ? "YES" : "NO") << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t; 

//     while(t--)
//     {
//         ll n, m;
//         cin >> n >> m; 
//         vector<vector<ll>> grid(n, vector<ll>(m));
        
//         ll maxColor = n * m;
        
//         vector<bool> present(maxColor + 1, false);
   
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cin >> grid[i][j];
//                 present[ grid[i][j] ] = true;
//             }
//         }
    
//         vector<ll> cost(maxColor + 1, 1);

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 int c = grid[i][j];
            
//                 if(j + 1 < m && grid[i][j+1] == c)
//                 {
//                     cost[c] = 2;
//                 }
              
//                 if(i + 1 < n && grid[i+1][j] == c)
//                 {
//                     cost[c] = 2;
//                 }
//             }
//         }
        

//         ll total = 0, maxCost = 0;
//         for (int i = 1; i<= maxColor; i++)
//         {
//             if(present[i])
//             {
//                 total += cost[i];
//                 maxCost = max(maxCost, cost[i]);
//             }
//         }
      
//         cout << (total - maxCost) << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> grid(n, vector<int>(m));

//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cin >> grid[i][j];
//             }
//         }

//         map<int, int> steps;

//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 int color = grid[i][j];
//                 if (steps.find(color) == steps.end()) {
//                     steps[color] = 1; 
//                 }
//                 if (steps[color] == 1) {
                   
//                     bool found = false;
                 
//                     if (i > 0 && grid[i - 1][j] == color) found = true;
                   
//                     if (!found && i < n - 1 && grid[i + 1][j] == color) found = true;
                   
//                     if (!found && j > 0 && grid[i][j - 1] == color) found = true;
                  
//                     if (!found && j < m - 1 && grid[i][j + 1] == color) found = true;
//                     if (found) {
//                         steps[color] = 2; 
//                     }
//                 }
//             }
//         }

//         int total = 0, max_step = 0;
//         for (auto& [color, step] : steps) {
//             total += step;
//             max_step = max(max_step, step);
//         }

//         cout << (total - max_step) << "\n";
//     }

//     return 0;
// }

//c

// #include <bits/stdc++.h>
// using namespace std;

// typedef ll ll;
// const ll MOD = 998244353;


// ll modExp(ll base, ll exp, ll mod) 
// {
//     ll result = 1;
//     base %= mod;
//     while(exp > 0)
//      {
//         if(exp & 1)
//             result = (result * base) % mod;
//         base = (base * base) % mod;
//         exp >>= 1;
//     }
//     return result;
// }
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
    
   
//     int maxN = 200000;
//     vector<ll> pow2(maxN+1), invPow2(maxN+1);
//     pow2[0] = 1;
//     for (int i = 1; i <= maxN; i++)
//     {
//         pow2[i] = (pow2[i-1] * 2) % MOD;
//     }

//     for (int i = 0; i <= maxN; i++)
//     {
//         invPow2[i] = modExp(pow2[i], MOD-2, MOD);
//     }
    
//     while(t--)
//     {
//         int n;
//         cin >> n;
       
//         vector<int> a(n+1);
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
        
//         vector<int> prefix2(n+1, 0);
//         for (int i = 1; i <= n; i++){
//             prefix2[i] = prefix2[i-1] + (a[i] == 2);
//         }
        
//         ll ans = 0;
//         ll sum_inv = 0;  
//         ll count_ones = 0;
        
//         for (int i = 1; i <= n; i++)
//         {
            
//             if(a[i] == 1){
//                 count_ones++;  
             
//                 sum_inv = (sum_inv + invPow2[prefix2[i]]) % MOD;
//             }
         
//             if(a[i] == 3)
//             {
//                 ll contrib = ( (pow2[prefix2[i-1]] * sum_inv) % MOD - count_ones ) % MOD;
//                 if(contrib < 0)
//                     contrib += MOD;
//                 ans = (ans + contrib) % MOD;
//             }
//         }
        
//         cout << ans % MOD << "\n";
//     }
    
//     return 0;
// }

//c

#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_N = 2e5 + 10;

vector<ll> pow2(MAX_N);
vector<ll> inv_pow2(MAX_N);

void precompute() {
    pow2[0] = 1;
    for (int i = 1; i < MAX_N; ++i) {
        pow2[i] = pow2[i - 1] * 2 % MOD;
    }
    ll inv_2 = (MOD + 1) / 2; // 499122177
    inv_pow2[0] = 1;
    for (int i = 1; i < MAX_N; ++i) {
        inv_pow2[i] = inv_pow2[i - 1] * inv_2 % MOD;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;

        vector<int> prefix_2(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix_2[i + 1] = prefix_2[i] + (a[i] == 2);
        }

        vector<int> suffix_3(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            suffix_3[i] = suffix_3[i + 1] + (a[i] == 3);
        }

        ll total_pairs = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                total_pairs += suffix_3[i + 1];
                total_pairs %= MOD;
            }
        }

        ll current_sum = 0;
        ll total = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] == 1) {
                int k = prefix_2[j + 1];
                current_sum = (current_sum + inv_pow2[k]) % MOD;
            } else if (a[j] == 3) {
                int k = prefix_2[j];
                total = (total + pow2[k] * current_sum) % MOD;
            }
        }

        ll ans = (total - total_pairs + MOD) % MOD;
        cout << ans << '\n';
    }

    return 0;
}