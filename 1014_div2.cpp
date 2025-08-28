// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         ll mx = *max_element(a.begin(), a.end());
//         ll mn = *min_element(a.begin(), a.end());
//         cout << (mx - mn) << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }
//         ll mx = *max_element(a.begin(), a.end());
//         ll mn = *min_element(a.begin(), a.end());
//         ll ans=0;
//         for(int i=0;i<n;i++)
//         {
//             ll x=__gcd(mn+a[i],mx+a[i]);
//             ans=max(x,ans);
//         }
       
//         cout << ans << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         string a,b;
//         cin>>a>>b;
//         ll zero=0;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]=='0')
//             {
//                 zero++;
//             }
//         }
//         if(zero==n)
//         {
//             cout<<"YES\n";
//             continue;
//         }
//         bool ok=true;
//         ll odd=0,even=0;
//         for(int i=0;i<n;i++)
//         {
//           if(b[i]=='0')
//           {
//             if(i%2==0)
//             {
//                 even++;
//             }
//             else
//             {
//                 odd++;
//             }
//           }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]=='1')
//             {
//                 if(i%2==1)
//                 {
//                     if(even<=0)
//                     {
//                         ok=false;
//                         break;
//                     }
//                     even--;
//                 }
//                 else
//                 {
//                      if(odd<=0)
//                     {
//                         ok=false;
//                         break;
//                     }
//                     odd--;
//                 }
//             }
//         }
       
//         if(ok)
//         {
//            cout<<"YES\n";  
//         }
//         else
//          cout<<"NO\n";
//     }
//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long int
using namespace std;

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
        vector<ll>a(n);
        ll odd=0,even=0,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2==0)
            even++;
            else
            odd++;
        }
       ll mx=*max_element(a.begin(),a.end());
       if(odd==0||even==0)
       {
        cout<<mx<<endl;
       }
       else
       {
        cout<<sum-(odd-1)<<endl;

       }

    }
    return 0;
}