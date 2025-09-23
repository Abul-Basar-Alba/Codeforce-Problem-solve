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
//         cin>>n;
//         vector<ll>a(n+1),b(n+1);
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }

//         for(int i=0;i<n;i++)
//         {
//             cin>>b[i];
//         }
//         b.push_back(0);
//         ll m=0,s=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]>b[i+1])
//             {
//               m+=a[i];
//               s+=b[i+1];
//             }
//         }
//         cout<<m-s<<endl;
//     }
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
//         ll n, a, b, c;
//         cin >> n >> a >> b >> c;

//         if (n <= a) 
//         {
//             cout << 1 << endl;
//         } 
//         else if (n <= a + b) 
//         {
//             cout << 2 << endl;
//         } 
//         else if (n <= a + b + c) 
//         {
//             cout << 3 << endl;
//         } 
//         else 
//         {
//             ll x = a + b + c;
//             ll res = (n / x) * 3;
//             ll rem = n % x;

//             if (rem > 0) 
//             {
//                 res++;
//                 rem -= a;
//                 if (rem > 0) 
//                 {
//                     res++;
//                     rem -= b;
//                     if (rem > 0) 
//                     {
//                         res++;
//                     }
//                 }
//             }
//             cout << res << endl;
//         }
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
//         ll n, m, k;
//         cin >> n >> m >> k;
        
//         vector<ll> a(m);
//         for (int i = 0; i < m; i++)
//             cin >> a[i];

//         vector<ll> q(k);
//         set<ll> known;
//         for (int i = 0; i < k; i++) 
//         {
//             cin >> q[i];
//             known.insert(q[i]); 
//         }

//         if(n==k)
//         {
//             string s="";
//             for(int i=0;i<m;i++)
//             s+='1';
//             cout<<s<<endl;
//         }
//         else if(n-2>=k&&m-1>=k)
//         {
//             string s="";
//             for(int i=0;i<m;i++)
//             s+='0';
//             cout<<s<<endl;
//         }
//         else
//         {
//         string res = ""; 

//         for (int i = 0; i < m; i++) 
//         {

//             if(known.find(a[i]) == known.end())
//             {
//               res+='1';
//             }
//             else
//             res+='0';

//         }

//         cout << res<< endl; 
//         }
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
//         ll n, x, y;
//         cin >> n >> x >> y;  

//         vector<ll> a(n);
//         ll sum = 0; 
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//             sum += a[i];  
//         }

//         sort(a.begin(), a.end());

//         ll res = 0;  

//         for (int i = 0; i < n; i++) 
//         {
    
//             ll rem= sum - a[i];

        
//             ll low = rem - y;
//             ll high = rem - x;

//             ll left = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();

//             ll right = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin() - 1;

//             if (left <= right) 
//             {
//                 res += (right - left + 1);
//             }
//         }

//         cout << res << endl; 
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool ok = false;

        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        for (int i = 0; i < n-1; ++i) 
        {
            int mx=max(a[i],a[i+1]);
            int mn=min(a[i],a[i+1]);
            if(mn*2>mx)
            {
                ok=true;
                break;
            }
        }

        if (ok) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
