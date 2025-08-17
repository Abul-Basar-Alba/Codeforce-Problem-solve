//A

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//        ll l,r,k;
//        cin>>l>>r>>k;
//        if(k==1)
//        {
//         cout<<r-l+1<<endl;
//         continue;
//        }
//        if(l==1){
//         cout<<r/k<<endl;
//        }
//        else
//        {
//         ll x=r/k;
//         ll res=abs(x-l+1);
//         if(x<l)
//         res=0;
//         //res=max(res,0LL);
//         cout<<res<<endl;
//        }
//     }
// }

//B

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

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
//         string s, r;
//         cin >> s >> r;
        
//         bool ok = true;
        
//         for (int i = 0; i < n - 1; ++i)
//         {
//             bool found = false;
          
//             for (int j = 0; j < s.size() - 1; j++) 
//             {
//                 if (s[j] != s[j + 1])
//                 {
//                     s[j] = r[i];  
//                     s.erase(j + 1, 1); 
//                     found = true;
//                     break;
//                 }
//             }
          
//             if (!found) 
//             {
//                 ok = false;
//                 break;
//             }
//         }
        
//         if (ok) 
//         {
//             cout << "YES" << endl;
//         } 
//         else 
//         {
//             cout << "NO" << endl;
//         }
//     }
    
//     return 0;
// }

//C

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;  
    while(t--)
    {
        ll n; 
        cin >> n;
        vector<ll> a(n);  
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        vector<ll> v1(n, 0);  
        vector<ll> v2(n, 0); 
        
        ll res = 0;
    
        for (int i = 0; i < n; i++) 
        {
            if (a[i] > res) 
            {
                res++;
            } 
            else if (a[i] < res) 
            {
                res--;
            }
           v1[i] = res;
        }

  
      ll mx = -1e9;  

        for (int l = 0; l < n; l++) 
        {
            for (int r = l; r < n; r++) 
            {
                ll temp = 0;
                for (int i = 0; i < n; i++) 
                {
                    if (i < l || i > r) 
                    { 
                        if (a[i] > temp) 
                        {
                            temp++;
                        } 
                        else if (a[i] < temp)
                        {
                            temp--;
                        }
                    }
                }
                mx = max(mx, temp);
            }
        }

        cout << mx << endl;
    }

    return 0;
}
