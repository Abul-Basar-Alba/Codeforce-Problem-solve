// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll a,b,c ,d;
//         cin>>a>>b>>c>>d;
//         if((a<b&&c<d)||(c<d&&c<b)||(a<b&&a<d))
//         cout<<"Flower\n";
//         else
//         cout<<"Gellyfish\n";
//     }
// }


// #include <bits/stdc++.h>
// #define ll long long
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
// #define ll long long
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


#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Platform 
{
    ll w, l, h; 
};

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;

    while (t--) 
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> fib(n+1);
        fib[1] = 1;
        fib[2] = 2;
        for (int i = 3; i <= n; i++) 
        {
            fib[i] = fib[i-1] + fib[i-2];
        }

        string ans(m, '0');

        for (int k = 0; k < m; k++) 
        {
            ll W, L, H;
            cin >> W >> L >> H;

            vector<Platform> platforms;
            platforms.reserve(2*n + 2);

            platforms.push_back({W, L, 0});

            bool ok = true;
            
            for (int i = n; i >= 1; i--) 
            {
                ll s = fib[i];

                ll choose_idx = -1;
                ll bestH = INT_MAX;

                for (int j = 0; j < (int)platforms.size(); j++) 
                {
                    int pw = platforms[j].w;
                    int pl = platforms[j].l;
                    int ph = platforms[j].h;
                    if (pw >= s && pl >= s && ph + s <= H) 
                    {
                        
                        if (ph < bestH) {
                            bestH = ph;
                            choose_idx = j;
                        }
                    }
                }

                if (choose_idx < 0) 
                {
                    ok = false;
                    break;
                }

                Platform base = platforms[choose_idx];
            
                platforms[choose_idx] = platforms.back();
                platforms.pop_back();

                ll pw = base.w, pl = base.l, ph = base.h;
               
                platforms.push_back({s, s, ph + s});

                if (pw - s > 0) 
                {
                    platforms.push_back({ pw - s, pl, ph });
                }
                
                if (pl - s > 0) {
                    platforms.push_back({ s, pl - s, ph });
                }
          
            }

            if (ok) {
                ans[k]= '1';
            }
       
        }

        cout << ans << "\n";
    }

    return 0;
}


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
