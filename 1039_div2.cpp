// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//         ll n, c;
//         cin >> n >> c;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//         }

//         sort(a.rbegin(), a.rend()); 

//         ll ans = n;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i]<=c)
//             {
//                 ans--;
//                 c/=2;
//             }
//         }

        
//         cout << ans << '\n';
//     }
// }


// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//        ll n;
//        cin>>n;
//        vector<ll>a(n);
//        for(int i=0;i<n;i++)
//        {
//         cin>>a[i];
//        }
//        ll mn=a[0];
//        bool ok=true;
//        for(int i=1;i<n;i++)
//        {
//         if(a[i]>=2*mn)
//         {
//           ok=false;
//           break;
//         }
//         mn=min(a[i],mn);
//        }
//        if(ok)
//        cout<<"YES\n";
//        else
//        cout<<"NO\n";
//     }
// }

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
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
       vector<ll>a(n);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
       ll l=0,r=n-1;
       string s="";
       bool small=true,big=false;
       while(l<=r)
       {
         if(a[l]<=a[r]&&small==true)
         {
           s+='L';
           small=false;
           big=true;
           l++;
         }
         else if(a[l]>a[r]&&small==true)
         {
           s+='R';
           small=false;
           big=true;
           r--;
         }
         else if(a[l]<=a[r]&&big==true)
         {
           s+='R';
           small=true;
           big=false;
           r--;
         }
         else if(a[l]>a[r]&&big==true)
         {
           s+='L';
           small=true;
           big=false;
           l++;
         }
       }
       cout<<s<<endl;
    }
}

