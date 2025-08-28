// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;
 
// int main() 
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
 
//     ll t;
//     cin >> t;
 
//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;
//         if (n == 1 || m == 1 || (n == 2 && m == 2))
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;
 
// int main() 
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
 

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         ll total = 0;
//         ll Fixed = 0;
//         for (ll i = 0; i < n; i++) 
//         {
//             ll a, b, c, d;
//             cin >> a >> b >> c >> d;
//             total += a + b;
//             ll zeros = 0;
//             if (b <= d) 
//             {
//                 zeros = min(a, c);
//             }
//             ll ones = min(b, d);
//             Fixed += zeros + ones;
//         }
//         cout << total - Fixed << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll ll int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin>>n;
        ll mn=0,one=0,zero=0,need=0;
        for(int i=0;i<n;i++)
        {
         ll a,b,c,d;
         cin>>a>>b>>c>>d;
         if(b>d)
         {
            need+=((b-d)+a);
         }
         if(a>c&&(b<=d||b==0))
         {
            zero+=(a-c);
         }
        }
        cout<<need+zero<<endl;

    }
    return 0;
}