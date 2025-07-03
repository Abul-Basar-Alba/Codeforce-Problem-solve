// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//          ll n;
//          cin>>n;
//          if(n%4==0)
//          {
//             cout<<"Bob\n";
//          }
//          else{
//             cout<<"Alice\n";
//          }

//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll  t;
//     cin >> t;
//     while (t--)
//     {

//         ll n, j, k;
//         cin >> n >> j >> k;
//         vector<ll> a(n);
//         for (auto &x : a) 
//         cin >> x;
//         ll aj = a[j-1];

//         if (k >= 2) 
//         {
//             cout << "YES\n";
//         } 
//         else 
//         {
            
//             ll mx = *max_element(a.begin(), a.end());
//             cout << (aj == mx ? "YES\n" : "NO\n");
//         }
//     }
//     return 0;
// }

// C. Prefix Min and Suffix Max
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
//         for (ll i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }
//         string ans(n, '0');

//         // mark prefix minima positions
//         ll cur_min = INT_MAX;
//         for (ll i = 0; i < n; i++) 
//         {
//             if (a[i] < cur_min) 
//             {
//                 cur_min = a[i];
//                 ans[i] = '1';
//             }
//         }
//         // mark suffix maxima positions
//         ll cur_max = INT_MIN;
//         for (ll i = n - 1; i >= 0; i--) 
//         {
//             if (a[i] > cur_max) 
//             {

//                 cur_max = a[i];
//                 ans[i] = '1';
//             }
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }

//D. Binary String Battle

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         ll one=0,zero=0;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]=='1')
//             one++;
//             else
//             zero++;

//         }
//         if(one<=k)
//         cout<<"Alice\n";
//     else if (k==1&&one==1)
//        cout<<"Alice\n";
//     else if(k==1&&one>1)
//      cout<<"Bob\n";
//     else
//     {
//         ll x=(n)/2;
//         if(x>k)
//         cout<<"Bob\n";
//         else if(k==x&&k<one)
//         {
//             cout<<"Bob\n";
//         }
//         else
//         cout<<"Alice\n";

//     }

//     }
// }

//E. MEX Count

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> F(n+2, 0);
        for (ll i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (a[i] <= n) 
                F[a[i]]++;
        }

        ll m0 = 0;
        while (m0 <= n+1 && F[m0] > 0) 
            m0++;

        vector<ll> prefix_sum(n+2, 0);
        prefix_sum[0] = F[0];
        for (ll i = 1; i <= n+1; i++) 
        {
            prefix_sum[i] = prefix_sum[i-1] + F[i];
        }

        vector<ll> D(m0+1, 0);
        for (ll x = 1; x <= m0; x++) 
        {
            D[x] = D[x-1] + (F[x-1] - 1);
        }

        vector<ll> diff(n+2, 0);

        for (ll x = 0; x <= m0; x++) 
        {
            ll low = (F[x] > 0) ? F[x] : 0;
            ll gt = n - prefix_sum[x];
            ll high = low + D[x] + gt;

            if (low > n) 
                continue;
            if (high > n)
                high = n;

            diff[low] += 1;
            if (high + 1 <= n) 
            {
                diff[high + 1] -= 1;
            }
        }

        vector<ll> ans(n+1, 0);
        ll cur = 0;
        for (ll k = 0; k <= n; k++) 
        {
            cur += diff[k];
            ans[k] = cur;
        }

        for (ll k = 0; k <= n; k++) 
        {
            cout << ans[k];
            if (k < n) 
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}

 