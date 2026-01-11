// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// vector<ll> prefix_function(const string &s) 
// {
//     ll n = s.size();
//     vector<ll> pi(n);
//     for (ll i = 1, j = 0; i < n; i++) 
//     {
//         while (j > 0 && s[i] != s[j]) 
//         j = pi[j-1];
//         if (s[i] == s[j]) 
//         {
//             j++;
//         }
//         pi[i] = j;
//     }
//     return pi;
// }

// int main() 
// {
//     string text, pattern;
//     cin >> text >> pattern;
//     string S = pattern + '#' + text;
//     vector<ll> pi = prefix_function(S);

//     ll ans = 0;
//     for (ll l : pi) 
//     {
//         if (l == pattern.size()) 
//         ans++;
//     }
//     cout << ans << "\n";
// }



// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     ll a,b,c;
//     cin>>a>>b>>c;
//     if(a+b==c||a+c==b||c+b==a)
//     cout<<"yes\n";
//     else
//     cout<<"No\n";
    
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
//     string s;
//     cin>>s;
//     cout<<"Mara gebna gat tekarkar gebna qaletlha Kiri Kiri"<<endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     //cin >> t;
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
//     string s;
//     cin>>s;
//     ll mn=1e9;
//     for(int i=0;i<s.size();i++)
//     {
//         ll x=s[i]-'0';
//         mn=min(x,mn);
//     }
//     cout<<mn<<endl;
    
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
//     ll a,b;
//     cin>>a>>b;
//     ll rem=a%b;
//     if(a%b==0)
//     cout<<0<<endl;
//     else 
//     cout<<abs(b-rem)<<endl;
    
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
//     ll n;
//     cin>>n;
//     vector<ll>a(n);
//     map<ll,ll>mp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         mp[a[i]]++;
//     }
//     ll mx=0;
//     for(auto v:mp)
//     {
//         ll x=v.second;
//         mx=max(x,mx);
//     }
//     cout<<n-mx<<endl;
    
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

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(int i=0;i<n;i++)
//     cin>>v[i];
//     ll x;
//     cin>>x;
//     ll l=0,r=n-1;
//     bool ok=false;
//     while(l<=r)
//     {
//         ll mid=(l+r)/2;
//         if(v[mid]==x)
//         {
//             cout<<mid<<endl;
//             ok =true;
//             break;
//         }
//         else if(v[mid]<x)
//         {
//             l=mid+1;
//         }
//         else
//         {
//             r=mid-1;
//         }
//     }
//     if(!ok)
//     cout<<-1<<endl;
// }

// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// bool is_prime(ll n)
// {
//     if (n <= 1)
//         return false;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
    
// }

// void Basar()
// {
//     ll n;
//     cin>>n;
//     vector<ll>a(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
        
            
//             ll x=sqrt(a[i]);
//             if(x*x==a[i])
//             {
//             if(is_prime(x))
//              cout<<"YES\n";
//             else
//              cout<<"NO\n";
//             }
//             else
//             {
//                 cout<<"NO\n";
//             }

//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     //cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, x;
//     cin >> n >> x;

//     string s = "";
//     for (int i = 0; i < n; i++) 
//     {
//         if (x & (1LL << i)) 
//             s = '1' + s;
//         else 
//             s = '0' + s;
//     }

//     reverse(s.begin(), s.end());

//     ll ans = 0;
//     for (int i = 0; i < n; i++) 
//     {
//         if (s[n-1-i] == '1') 
//         ans |= (1LL << i);
//     }

//     cout << ans << "\n";
// }


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
//     vector<ll> a(n);
//     for(int i=0;i<n;i++) 
//     cin >> a[i];

//     vector<pair<ll,ll>> b(n);
//     for(int i=0;i<n;i++) 
//     b[i] = {a[i], i};

//     sort(b.begin(), b.end()); 

//     vector<ll> pos(n); 
//     for(int i=0;i<n;i++) 
//     pos[b[i].second] = i;

//     vector<pair<ll,ll>> swaps;

//     vector<ll> sorted_a(n);
//     for(int i=0;i<n;i++) 
//     sorted_a[i] = b[i].first;

//     for(int i=0;i<n;i++) 
//     {
//         while(a[i] != sorted_a[i]) 
//         {
//             ll idx = -1;
//             for(int j=i+1;j<n;j++) 
//             if(a[j]==sorted_a[i]) 
//             { 
//                 idx=j; 
//                 break; 
//             }
//             swaps.push_back({i, idx});
//             swap(a[i], a[idx]);
//         }
//     }

//     cout << swaps.size() << "\n";
//     for(auto p: swaps) 
//     cout << p.first << " " << p.second << "\n";
// }



// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     //cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }

