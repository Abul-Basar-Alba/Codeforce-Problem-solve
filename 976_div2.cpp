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
//         ll n, k;
//         cin >> n >> k;
//         if (k == 1) 
//         {
            
//             cout << n << "\n";
//             continue;
//         }
//         ll ans = 0;
//         while (n > 0) 
//         {
//             ans += n % k;
//             n /= k;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
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
        ll k;
        cin >> k;

        ll m = (sqrt(k));

        ll n=k+m;
        ll res=sqrt(n);
        if(res>m)
        {
            n++;
        }

     
        cout << n << "\n";
    }
    return 0;
}
