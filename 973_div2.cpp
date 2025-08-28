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
//       ll n;
//         cin>>n;
//         ll x,y;
//         cin>>x>>y;
//         ll mn=min(x,y);
//         cout<<(n+mn-1)/mn<<endl;
//     }
//   }

#include <bits/stdc++.h>
#define ll ll int 
using namespace std;

void solve() 
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll j=n-2;
    for (int i = 0;i< n-2; i++) 
    {
       ll x=a[j]-a[i];
       a[j]=x;
    }
    cout<<(a[n-1]-a[j])<<endl;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    
    return 0;
}
