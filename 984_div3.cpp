// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     bool flag = true;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         if (abs(v[i]-v[i+1])!=5&&abs(v[i]-v[i+1])!=7)
//         {
//             flag = false;
//         }
//     }
//     if (flag)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
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
//     ll n,k;
//     cin>>n>>k;
//     vector<pair<ll,ll>>v;
//     map<ll, ll> freq;
//     for(int i=0;i<k;i++)
//     {
//         ll x, y;
//         cin>>x>>y;  
//         freq[x]+=y;
//     }

//     for (const auto& [key, value] : freq)
//     {
//         v.emplace_back(key, value);
//     }
//     sort(v.begin(), v.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) 
//     {
//         return a.second > b.second; 
//     });
//     ll ans = 0;
//     for (int i = 0; i < min(n,(ll)v.size()); i++)
//     {
//         ans += v[i].second;
//     }
//     cout << ans << "\n";
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
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        ll n = s.size();

        vector<bool> has(n, false);
        ll cnt = 0;

        for (int i = 0; i + 3 < n; i++) 
        {
            if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') 
            {
                has[i] = true;
                cnt++;
            }
        }

        ll q;
        cin >> q;
        while (q--) 
        {
            ll pos, v;
            cin >> pos >> v;
            pos--;  

            
            if (s[pos] - '0' == v) 
            {
                cout << (cnt > 0 ? "YES\n" : "NO\n");
                continue;
            }

            for (int start = pos - 3; start <= pos; start++) 
            {
                if (start >= 0 && start + 3 < n && has[start]) 
                {
                    has[start] = false;
                    cnt--;
                }
            }

            s[pos] = char('0' + v);

            for (int start = pos - 3; start <= pos; start++) 
            {
                if (start >= 0 && start + 3 < n) 
                {
                    if (s[start] == '1' && s[start+1] == '1'
                     && s[start+2] == '0' && s[start+3] == '0') 
                     {
                        if (!has[start]) 
                        {
                            has[start] = true;
                            cnt++;
                        }
                    }
                }
            }

            cout << (cnt > 0 ? "YES\n" : "NO\n");
        }
    }

    return 0;
}
