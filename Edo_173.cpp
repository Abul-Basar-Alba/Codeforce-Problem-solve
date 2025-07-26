
//A. Coin Transformation

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// ll max_coins(ll n) 
// {
//     ll coins = 1; 
//     while (n > 3) 
//     {
//         coins *= 2;  
//         n /= 4;      
//     }
//     return coins;  
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll t;
//     cin >> t; 
//     while (t--) 
//     {
//         ll n;
//         cin >> n;  
//         cout << max_coins(n) << endl;  
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int factorial_mod(int n, int mod) 
// {
//     if (n >= 6) return 0;  
    
//     ll res = 1;
//     for (int i = 2; i <= n; i++) 
//     {
//         res = (res * i) % mod;
//     }
//     return res;
// }

// void solve(int n, int d) 
// {
//     vector<ll> oddDigits = {1, 3, 5, 7, 9};
//     vector<ll> v;

  
//     ll factMod9 = factorial_mod(n, 9);

//     for (int odd : oddDigits) 
//     {
//         if (odd == 5) 
//         {
          
//             if (d == 5) 
//             {
//                 v.push_back(5); 
//             }
//         } 
//         else 
//         {
            
//             ll rep = (d * factMod9) % odd;
//             if (rep == 0) 
//             {
//                 v.push_back(odd);
//             }
//         }
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, d;
//         cin >> n >> d; 
//         solve(n, d); 
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// #define ll ll

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

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

//         ll zero = count(a.begin(), a.end(), 0);

//         if (zero == n) 
//         {
//             cout << 0 << endl;
//         } 
//         else 
//         {
//             ll first = -1, last= -1;
//             for (ll i = 0; i < n; i++) 
//             {
//                 if (a[i] != 0)
//                 {
//                     if (first == -1) 
//                     first = i;
//                     last = i;
//                 }
//             }

//             bool ok = false;
//             for (ll i = first; i <= last; i++) 
//             {
//                 if (a[i] == 0) 
//                 {
//                     ok = true;
//                     break;
//                 }
//             }

//             if (ok) 
//             {
//                 cout << 2 << endl;
//             } 
//             else 
//             {
//                 cout << 1 << endl;
//             }
//         }
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define ll ll

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;  
    while (t--) 
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll> v;
        ll dot = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'p')
                v.push_back(i + 1);
            else if(s[i] == 's')
                v.push_back(n - i + 2);
            else
                dot++;
        }

        while(dot > 0)
        {
            for(int i = 1; i <= n; i++)
            {
                if (find(v.begin(), v.end(), i) == v.end()) 
                {
                    v.push_back(i);
                    dot--;
                    if(dot == 0)
                        break;
                }
            }
        }

        set<ll> st;
        for(int i : v)
        {
            st.insert(i);
        }

        if(st.size() == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
