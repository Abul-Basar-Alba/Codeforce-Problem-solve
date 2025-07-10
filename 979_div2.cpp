
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin>>n;
//         vector<ll> a(n), b(n), c(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         ll max_a = *max_element(a.begin(), a.end());
//         ll min_a = *min_element(a.begin(), a.end());
//         ll ans=max_a-min_a;
//         ans*=(n-1);
//         cout << ans << "\n";

//     }
// }



#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
       string s="";
       for(ll i = 0; i < n; i++)
       {
           ll x=n/2;
           if(i==x)
           {
            s+="1";
           }
           else
           {
            s+="0";
           }
       }
       cout << s << "\n";
    }
}


