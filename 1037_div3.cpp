
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
//         string s;
//         cin >> s;
//         ll mn = 10; 

//         for (int i = 0; i < s.size(); i++)
//         {
//             ll x = s[i] - '0';
//             mn = min(mn, x);
//         }
        
//         cout << mn << "\n";
//     }

//     return 0;
// }



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
//         ll n,k;
//         cin >> n >> k;
//          vector<ll> a(n+1), pref(n+1, 0);

//         for (int i = 1; i <= n; i++) 
//         {
//             cin >> a[i];
//             pref[i] = pref[i-1] + a[i];
//         }

//         ll ans = 0;
//         ll last = -1;

//         for (int i = 1; i + k - 1 <= n; i++) 
//         {
        
//             if (pref[i+k-1] - pref[i-1] == 0) 
//             {
//                 if (i >= last + 2) 
//                 {
//                     ans++;
//                     last = i + k - 1;
//                 }
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
//     while(t--)
//     {
//         ll n;
//         ll x;
//         cin >> n >> x;
//         vector<array<ll,3>> a(n);
//         for(int i = 0; i < n; i++){
//             cin >> a[i][0] >> a[i][1] >> a[i][2]; 
//         }
//         sort(a.begin(), a.end(),
//              [&](auto &A, auto &B){
//                  return A[0] < B[0];
//              });
        
        
//         ll best= x;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i][0]<=x&&x<=a[i][1])
//             {
                
//                 best = max(best, a[i][2]);
//                 x =best;
//             }
//             else if(a[i][0]>x)
//             {
//                 break;
//             }
//         }
//         cout << best << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = ll;
 
int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
 
    ll t;
    cin >> t;
 
    while (t--) 
    {
        ll n;
        cin >> n;
       vector<ll> p(n), s(n);
    for (ll &it : p)
    {
        cin >> it;
    } 
    for (ll &it : s)
    {
        cin >> it;
    } 
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) 
    {
        a[i] =(p[i]*s[i]/__gcd(p[i], s[i]));
    }
    vector<ll> pr(n), su(n);
    pr[0] = a[0];
    for (int i = 1; i < n; ++i) 
    {
        pr[i] = __gcd(pr[i - 1], a[i]);
    }
    su[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) 
    {
        su[i] = __gcd(a[i], su[i + 1]);
    }
    if (pr == p && su == s)
    {
        cout<< "YES\n";
    }
    else
    {
        cout << "NO\n";
    }             
}
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n,k;
//         cin >> n >> k;
//         vector<ll>a(n);
//         for(int i = 0; i < n; i++) 
//         cin >> a[i];
//         ll w=1,h=a[k-1],st=a[k-1];
//         sort(a.begin(), a.end());
//         // if(w>h)
//         // {
//         //     cout << "NO\n";
//         //     continue;
//         // }
//         bool ok = true;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]<=st)
//             continue;
//             ll deff= abs(a[i]-a[i-1]);

//             if(w+deff-1>h||w+deff>h+deff)
//             {
//                 cout << "NO\n";
//                 ok = false;
//                 break;
//             }
            
//                 w+=deff;
//                 h+=deff;
//         }
//         if(ok)
//       cout << "YES\n";
//     }
// }