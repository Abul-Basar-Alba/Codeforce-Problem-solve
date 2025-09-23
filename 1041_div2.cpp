// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     set<ll> s;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         s.insert(a[i]);
//     }
//     if(s.size() == 1 && *s.begin() != 0)
//     {
//         cout << "Yes\n";
//         return;
//     }
//     if(s.size() <=2)
//     {
//         ll f= *s.begin();
//         ll se= *next(s.begin());
//         if((f==-1||se==-1)&&(f!=0&&se!=0))
//         {
//             cout<<"Yes\n";
//         }
//         else
//         {
//             cout<<"No\n";
//         }
//     }
//     else
//     {
//         cout<<"No\n";
//     }

// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// void solve() 
// {
//     ll n, x;
//     string s;
//     cin >> n >> x >> s;
  
//     if (x == 1 || x == n) 
//     {
//         cout << 1 << "\n";
//         return;
//     }
 
//     ll xi = x - 1;

//     ll hl = -1;              
//     for (ll i = xi - 1; i >= 0; i--) 
//     {
//         if (s[i] == '#') 
//         {
//             hl = i; 
//             break;
//         }
//     }
  
//     ll hr = n;                 
//     for (ll i = xi + 1; i < n; i++) 
//     {
//         if (s[i] == '#') 
//         {
//             hr = i;
//             break;
//         }
//     }
  
//     if (hl == -1 && hr == n)
//      {
//         cout << 1 << "\n";
//         return;
//     }

//     ll l = (hl == -1 ? LLONG_MIN : hl + 1);
//     ll r = (hr == n  ? LLONG_MAX : hr + 1);

//     ll r1 = (r == LLONG_MAX ? LLONG_MIN : min(x, n - r + 2));
   
//     ll l2 = (l == LLONG_MIN ? LLONG_MIN : min(l + 1, n - x + 1));

//     cout << max(r1, l2) << "\n";
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     cin>>t;
//     while (t--) 
//     {
//         ll n, k;
//         cin >> n >> k;
//         vector<ll> a(n), b(n);
//         for (int i = 0; i < n; ++i) 
//             cin >> a[i];
//         for (int i = 0; i < n; ++i) 
//             cin >> b[i];

//         vector<pair<ll,ll>> v;
//         ll sum = 0;
//         for (int i = 0; i < n; ++i) 
//         {
//             ll L = min(a[i], b[i]);
//             ll R = max(a[i], b[i]);
//             v.push_back({L, R});
//             sum += (R - L);
//         }

//         sort(v.begin(), v.end());
        
//         bool ok = false;
//         for (int i = 1; i < v.size(); ++i) 
//         {
//             if (v[i].first <= v[i-1].second) 
//             {
//                 ok = true;
//                 break;
//             }
//         }
//         if (ok) 
//         {
//             cout << sum << '\n';
//             continue;
//         }

//         ll mngap = LLONG_MAX;
//         for (int i = 1; i < v.size(); ++i) 
//         {
//             mngap = min(mngap, v[i].first - v[i-1].second);
//         }
//         cout << sum + 2 * mngap << '\n';
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) 
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<ll,ll>> v;
for (ll i = 0; i < n; i++) {
    ll x = min(a[i], b[i]);
    ll y = max(a[i], b[i]);
    v.push_back({x, y});
}
sort(v.begin(), v.end()); // প্রথম ভ্যালু দিয়ে sort

vector<ll> def;
ll sum = 0;
for (auto &p : v) {
    ll diff = p.second - p.first;
    def.push_back(diff);
    sum += diff;
}

ll mn = LLONG_MAX, l = -1, r = -1;
for (int i = 0; i < def.size() - 1; i++) {
    ll x = abs(def[i+1] - def[i]);
    ll y = abs(def[i+1] + def[i]);
    ll mx = max(x, y);
    if (mx < mn) {
        mn = mx;
        l = i;
        r = i + 1;
    }
}

ll ans = 0;
for (int i = 0; i < def.size(); i++) {
    if (i == l || i == r) continue;
    ans += def[i];
}
ans += mn;

cout << max(ans, sum) << "\n";

    
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