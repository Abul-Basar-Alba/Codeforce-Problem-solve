// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll>v(n);
//         ll sum=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             sum+=v[i];
//         }
//         if(sum==0||sum>(n-1))
//         {
//             cout<<"Yes\n";
//             continue;
//         }
//         bool ok=false;
//         for(int i=0;i<n-1;i++)
//         {
//          if(v[i]==0&&v[i+1]==0)
//          {
//             ok=true;
//             break;
//          }

//         }
//         if(ok)
//         {
//             cout<<"Yes\n";
//         }
//         else
//         {
//             cout<<"No\n";
//         }

//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ceil_log2(ll x) 
{
    ll res = 0;
    ll p = 1;
    while (p < x) 
    {
        p <<= 1;
        res++;
    }
    return res;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        ll lgn = ceil_log2(n);
        ll lgm = ceil_log2(m);

        ll best_row = lgm + min( ceil_log2(a), ceil_log2(n - a + 1) );

        ll best_col = lgn + min( ceil_log2(b), ceil_log2(m - b + 1) );

        ll ans= 1 + min(best_row, best_col);

        cout << ans << "\n";
    }
    return 0;
}
