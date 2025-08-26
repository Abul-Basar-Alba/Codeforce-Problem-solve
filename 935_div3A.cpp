// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll a,b,c;
//         cin>>a>>b>>c;
//         ll ans=a;
//         if(a==0&&b==0&&c==0||b==0&&c==0)
//         {
//             cout<<ans<<endl;
//             continue;
//         }
//         ll f=0,tem=0;
//         if(b>=3)
//         {
//             ans+=(b/3);
//             b%=3;
//             if(b!=0)
//             {
//             tem=3-b;
//             ans+=1;
//             }
//             if(tem>c)
//               f=1;
//             c-=tem;
//             ans+=(c/3);
//             c%=3;
//             if(c!=0)
//                 ans+=1;
//             if(f==0)
//             cout<<ans<<endl;
//             else
//                 cout<<-1<<endl;
//         }
//         else
//         {
//             if(b!=0)
//             {
//              tem=3-b;
//            if(tem>c)
//             f=1;
//            c-=tem;
//            ans+=1;
//            ans+=(c/3);
//            c%=3;
//            if(c!=0)
//             ans+=1;
//            if(f==0)
//             cout<<ans<<endl;
//            else
//             cout<<-1<<endl;
//             }
//             else
//             {
//                 ans+=(c/3);
//                 c%=3;
//                 if(c!=0)
//                     ans+=1;
//                 cout<<ans<<endl;
//             }
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

//     ll t;
//     cin >> t;
//     while (t--)
//      {
//         ll n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<ll> pre(n + 1);

//         pre[0] = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             pre[i + 1] = pre[i] + (s[i] - '0');
//         }

//         ll ans = -1;
//         for (int i = 0; i <= n; i++) 
//         {
//             ll lef =i- pre[i] ;
//             ll rig = pre[n] - pre[i];
//             if (2 * lef >= i && 2 * rig >= n - i) 
//             {
//                 if (ans == -1 || abs(n - 2 * i) < abs(n - 2 * ans)) 
//                 {
//                     ans = i;
//                 }
//             }
//         }
//         cout << ans << endl;
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
    cin >> t;
    
    while (t--) 
    {
       ll n,m;
       cin >> n >> m;
       vector<ll> a(n+1), b(n+1);

       for (int i = 1; i <= n; i++)
           cin >> a[i];

       for (int i = 1; i <= n; i++)
           cin >> b[i];

       vector<ll> res(n+1, 0);
       vector<ll> suff(n+2, 0);

       for (int i = 1; i <= n; i++)
           res[i] = min(a[i], b[i]);

       for (int i = n; i >= 1; i--)
           suff[i] = suff[i+1] + res[i];

       ll ans = LLONG_MAX;

       for (int i = 1; i <= m; i++)
       {
           ans = min(ans, a[i] + suff[i+1]);
       }

       cout << ans << endl;
    }
    
    return 0;
}
