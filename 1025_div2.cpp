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
//         cin>>n;
//         vector<ll>v(n);
//         ll sum=0;
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//             sum+=v[i];
//         }
//         if(sum==0||sum>(n-1))
//         {
//             cout<<"Yes\n";
//             continue;
//         }
//         bool ok=false;
//         for(int i=0;i<n-1;i++)
//         {
//          if(v[i]==0&&v[i+1]==0)
//          {
//             ok=true;
//             break;
//          }

//         }
//         if(ok)
//         {
//             cout<<"Yes\n";
//         }
//         else
//         {
//             cout<<"No\n";
//         }

//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n, m, a, b;
        cin >> n >> m >> a >> b;

        ll lgn = ceil(log2(n));
        ll lgm = ceil(log2(m));
        
        ll x=min( a,(n - a + 1));
        ll y=min( b,(m - b + 1));

        ll row= lgm+ceil(log2(x));

        ll col=lgn+ceil(log2(y));

        ll ans= 1 + min(row, col);
 
        cout << ans << "\n";
    }
    return 0;
}
