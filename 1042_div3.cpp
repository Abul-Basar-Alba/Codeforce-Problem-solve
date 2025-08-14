// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
   
//         ll n;
//         cin >> n;
//         vector<ll> a(n), b(n);
//         for (ll i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         ll ans = 0;
//         for (ll i = 0; i < n; i++) 
//         {
//             if(a[i]>b[i])
//             {
//                 ans += a[i] - b[i];
//             }
//         }
//         cout << ans+1 << endl;
    
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//    ll n;
//    cin >> n;
//    vector<ll>v;
//    if(n%2==0)
//    {
//     for (ll i = 0; i < n-2; i++)
//     {
//         if(i%2==0)
//         v.push_back(-1);
//        else
//        v.push_back(3);
//     }
//     v.push_back(-1);
//     v.push_back(2);
//     for(auto a:v)
//     {
//         cout << a << " ";
//     }
//     cout << endl;
//    } 
//    else
//    {
//     for (ll i = 0; i < n; i++)
//     {
//         if(i%2==0)
//         v.push_back(-1);
//        else
//        v.push_back(3);
//     }
//     for(auto a:v)
//     {
//         cout << a << " ";
//     }
//     cout << endl;
//    }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void Basar() 
// {
//     int n, k;
// cin >> n >> k;
// vector<int> a(n), b(n);
// for (int i = 0; i < n; i++) 
// {
//   cin >> a[i];
//   a[i] %= k;
//   a[i] = min(a[i], k - a[i]);
// }
// for (int i = 0; i < n; i++) 
// {
//   cin >> b[i];
//   b[i] %= k;
//   b[i] = min(b[i], k - b[i]);
// }
// sort(a.begin(), a.end());
// sort(b.begin(), b.end());
// bool ok = (a == b);
// cout << (ok ? "YES\n" : "NO\n");
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tt; cin >> tt;
//     while (tt--) {
//         Basar();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// void Basar() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n), b(n);
//     for (ll &x : a) cin >> x;
//     for (ll &x : b) cin >> x;

//     for (ll i = 0; i < n - 1; i++) 
//     {
//         if (a[i] != b[i]) 
//         {
            
//             if ((a[i] ^ a[i + 1]) == b[i] ) 
//             {
//                 a[i] ^= a[i + 1]; 
//             }
//         }
//     }
//     for (ll i = n - 2; i >= 0; --i) 
//     {
//         if (a[i] != b[i])
//          {
//             if ((a[i] ^ a[i + 1]) == b[i]) 
//             {
//                 a[i] ^= a[i + 1];
//             } 
//         }
//       }

//     if (a == b) cout << "YES\n";
//     else cout << "NO\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) Basar();
// }


#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
  ll n;
  cin>>n;
  vector<vector<ll>>g(n);
  for(ll i=0;i<n-1;i++)
  {
    ll u,v;
    cin>>u>>v;
    u--; v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  map<ll,ll>mp;
  ll leaf=0,mx=0;
  for(ll i=0;i<n;i++)
  {
    if(g[i].size()==1)
    {
      leaf++;
      mp[g[i][0]]++;
    }
    mx=max(mx,mp[g[i][0]]);
  }
  if(n==2)
  {
    cout<<0<<endl;
  }
  else
  {
    cout<<leaf-mx<<endl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}