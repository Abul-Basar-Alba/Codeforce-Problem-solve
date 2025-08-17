// #include <bits/stdc++.h>
// #define ll ll
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
// using ll = ll;

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
// using ll = ll;

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
using ll = ll;

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
        vector<ll> v(n+2),res(n+2);
        for (ll i = 0; i < n; i++) 
        {
            ll x;
            cin >> x;
            v[x]++;
        }
        ll mex = 0;
        for (ll i = 0; i <=n; i++)
        {
            if (v[i] == 0) 
            {
                mex = i;
                break;
            }
        }

        ll cnt = n;
        for (ll i = 0; i <mex; i++) 
        {
            res[v[i]]+=1;
            res[cnt] -= 1;
            cnt--;
        }

        res[0] = 1;
        for (ll i = 1; i <=n; i++) 
        {
            res[i] = res[i - 1] + res[i];
        }
        for (ll i = 0; i <= n; i++) 
        {
            cout << res[i] << " ";
        }
        cout << "\n";  
    }
    return 0;
}

 