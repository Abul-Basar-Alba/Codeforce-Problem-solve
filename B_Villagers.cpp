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
//         cin >> n;
//         vector<ll> v(n);
//         for (int i = 0; i < n; i++) 
//         cin >> v[i];
//         sort(v.begin(), v.end()); 

//         ll ans = 0;
    
//         for (int i = 1; i < n; i += 2) 
//         ans += v[i];
//         if (n % 2 == 1) 
//         {
//             ans += v[n-1];
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }



#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

   ll ans=0;
   for(ll i=0; i<n; i+=2)
   {
       ans+=a[i];
   }
   cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
