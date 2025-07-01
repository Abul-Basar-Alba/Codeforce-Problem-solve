// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//          ll n;
//          cin>>n;
//          if(n%4==0)
//          {
//             cout<<"Bob\n";
//          }
//          else{
//             cout<<"Alice\n";
//          }

//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll  t;
    cin >> t;
    while (t--)
    {

        ll n, j, k;
        cin >> n >> j >> k;
        vector<ll> a(n);
        for (auto &x : a) 
        cin >> x;
        ll aj = a[j-1];

        if (k >= 2) 
        {
            cout << "YES\n";
        } 
        else 
        {
            // k == 1: only possible if aj is the maximum
            ll mx = *max_element(a.begin(), a.end());
            cout << (aj == mx ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
