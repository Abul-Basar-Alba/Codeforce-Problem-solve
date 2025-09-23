<<<<<<< HEAD
=======

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
//         ll n;
//         cin >> n;
//         ll mx1=0,mx2=0;
//         while(n--)
//         {
//             ll w,h;
//             cin>>w>>h;
//             mx1=max(mx1,w);
//             mx2=max(mx2,h);

//         }
//         cout<<2*(mx1+mx2)<<endl;
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
//         ll mx1=0,mx2=0;
//         while(n--)
//         {
//             ll w,h;
//             cin>>w>>h;
//             mx1=max(mx1,w);
//             mx2=max(mx2,h);

//         }
//         cout<<2*(mx1+mx2)<<endl;
//     }
// }
// =======
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

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
//         vector<ll> p(n), s(n);
//         for (int i = 0; i < n; i++) cin >> p[i];
//         for (int i = 0; i < n; i++) cin >> s[i];

//         bool ok = true;

//         for (int i = 1; i < n && ok; i++) 
//         {
//             if (p[i-1] % p[i] != 0)
//                 ok = false;
//         }

//         for (int i = 0; i+1 < n && ok; i++) 
//         {
//             if (s[i+1] % s[i] != 0)
//                 ok = false;
//         }

        
//         for (int i = 0; i < n && ok; i++) 
//         {
//             ll g =__gcd(p[i], s[i]);
           
//             if (p[i] % s[i] != 0 && s[i] % p[i] != 0)
//                 ok = false;
//         }

//         for (int i = 1; i < n && ok; i++) 
//         {
//             ll g1 =__gcd(p[i-1], s[i]);
//             if (p[i] % g1 != 0)
//                 ok = false;
//         }

        
//         for (int i = 0; i+1 < n && ok; i++) 
//         {
//             ll g2 =__gcd(p[i], s[i+1]);
//             if (s[i] % g2 != 0)
//                 ok = false;
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll mn = LLONG_MAX;  // ll এর সবচেয়ে বড় মান
        for (int i = 0; i < n; i++)  // 0-based indexing
        {
            ll x = i;  // i এর আগে কয়টা এলিমেন্ট আছে
            ll y = 0;
            for (int j = i + 1; j < n; j++)  // i+1 থেকে n-1 পর্যন্ত
            {
                if (v[j] > v[i]) y++;
            }
            mn = min(mn, x + y);
        }
        cout << mn << '\n';
    }
    return 0;
}
>>>>>>> 5a4fceb5f9f973da003f452aa0fccf4ced338c3a
