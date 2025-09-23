// //c
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {

//     ll t;
//     cin>>t;
//     while(t--)
//     {
//        ll a,b,c,d;
//        cin>>a>>b>>c>>d;
//        vector<ll>v;
//        v.push_back(a);
//        v.push_back(b);
//        v.push_back(c);
//        v.push_back(d);
//        sort(v.begin(),v.end());
//        cout<<v[0]*v[2]<<endl;
//     }

// }
// //I
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {

//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        ll x=1;
//        while(n>1)
//        {
//            x*=2;
//            n/=2;
//        }
//        cout<<x*(x-1)<<endl;
//    }
// }

// //F
// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {

//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     ll c1=0,c2=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//         if(v[i]==1)
//             c1++;
//         else if(v[i]==2)
//             c2++;

//     }
//     c2=c2%2;
//     if(c1%2!=0)
//     {
//         cout<<"NO\n";
//     }
//     else if(c2>0&&c1==0)
//     {

//             cout<<"NO\n";
//     }
//     else
//     {
//             cout<<"Yes\n";
//     }

// }
// //G
// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

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
//         vector<ll> a(n);
//         for(ll &x : a)
//          cin >> x;

//         vector<ll> dp(n + 1, 0);
//         map<ll, ll> last;

//         for (int i = 1; i <= n; ++i)
//         {
//             ll c = a[i - 1];
//             dp[i] = dp[i - 1];

//             if (last.count(c))
//             {
//                 ll can = last[c] + i + 1;
//                 dp[i] = max(dp[i], can);
//             }

//             ll cur_val = dp[i - 1] - i;
//             if (!last.count(c) || cur_val > last[c])
//             {
//                 last[c] = cur_val;
//             }
//         }

//         cout << dp[n] << '\n';
//     }

//     return 0;
// }



#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll dx = llabs(x1 - x2);
    ll dy = llabs(y1 - y2);
    ll ans = 2*(dx + dy) + 4;
    if (dx == 0 || dy == 0)
        ans += 2;

    cout << ans << "\n";
    return 0;
}
