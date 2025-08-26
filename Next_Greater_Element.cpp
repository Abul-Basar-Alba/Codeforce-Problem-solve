// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     multiset<ll> s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         s.insert(v[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         s.erase(s.find(v[i])); 
//         auto it = s.upper_bound(v[i]);
//         if (it != s.end())
//         {
//             cout << v[i] << ' ' << *it << endl;
//             //s.erase(it); 
//         }
//         else
//         {
//             cout << v[i] << ' ' << -1 << endl;
//         }
//     }
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     stack<ll> s; 
//     vector<ll> nge(n, -1); 
    
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         while (!s.empty() && v[i] > v[s.top()])
//         {
//             nge[s.top()] = v[i]; 
//             s.pop();
//         }
//         s.push(i);
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << ' ' << nge[i] << endl;
//     }
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }

//         if (is_sorted(a.begin(), a.end())) 
//         {
//             cout << 0 << endl;
//             continue; 
//         }

//         ll res = 0;
//         while (!is_sorted(a.begin(), a.end())) 
//         {
//             ll f = 0;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 if (a[i] > a[i + 1]) 
//                 {
//                     res++;
//                     f = a[i];
//                     break;
//                 }
//             }
//             for (int i = 0; i < n; i++) 
//             {
//                 if (f == a[i]) 
//                 {
//                     a[i] = 0;
//                 }
//             }
//         }
        
//         cout << res << endl;
//     }

//     return 0;
// }




#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin >> n; 
        
        
         map<ll,ll> col;
        ll a[n], b[n];
        
        for (int i = 0; i < n;i++) 
        {
            cin >> a[i] >> b[i];
            
            col[b[i]]++;
        }

        ll res = 0;
        for (int i = 0; i < n;i++) 
        {
           
            res += col[a[i]];
        }

        cout << res << endl;
    }

    
}
