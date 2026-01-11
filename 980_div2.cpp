// #include <bits/stdc++.h>
// using ll = ll;
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll a,b;
//         cin >> a >> b;
//         if(a>=b)
//         {
//             cout<<a<<endl;
//         }
//         else
//         {
//             ll x=b-a;
//             a=max(a-x,0LL);
//             cout<<a<<endl;
//         }
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;

// #define ll ll
// #define pb push_back
// #define all(x) x.begin(),x.end()
// #define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

// const ll N= 1e5+5;

// int main()
// {
//    FastIO;

//    ll t;
//    cin>>t;
//    while(t--)
//    {
//       ll n,k; 
//       cin>>n>>k;
//       vector<ll> a(n);
//       for(ll i=0;i<n;i++) 
//       cin>>a[i];

//       sort(all(a));
  
//         ll sum=0,ex=0;
//       for(ll i=0;i<n;i++) 
//       {
//         ll cur= a[i]*(n-i);
//         cur+= sum;
//         if(cur<k) 
//         {
//           ++ex;
//         }
//         else 
//         {
//           break;
//         }

//         sum+= a[i];
//       }

//       cout<<k+ex<<endl;
//    }
//    return 0;
// }

#include <bits/stdc++.h>
using ll = ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), [](auto x, auto y){
    return x.first + x.second < y.first + y.second;
 });

        for(auto &p : a)
        {
            cout << p.first << " " << p.second<< " ";
        }
        cout << "\n";
}
}