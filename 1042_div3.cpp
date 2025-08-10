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



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Basar() 
{
    int n, k;
cin >> n >> k;
vector<int> a(n), b(n);
for (int i = 0; i < n; i++) {
  cin >> a[i];
  a[i] %= k;
  a[i] = min(a[i], k - a[i]);
}
for (int i = 0; i < n; i++) {
  cin >> b[i];
  b[i] %= k;
  b[i] = min(b[i], k - b[i]);
}
sort(a.begin(), a.end());
sort(b.begin(), b.end());
bool ok = (a == b);
cout << (ok ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while (tt--) {
        Basar();
    }
    return 0;
}
