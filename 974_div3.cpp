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
//         ll n, k;
//         cin >> n >> k;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         ll tem = 0, ans = 0;
//         for(int i = 0; i < n; i++)
//         {
//             if(a[i] >= k)
//             {
//                 tem += a[i];
//             }
//             else if(a[i] == 0 && tem > 0)
//             {
//                 ans++;
//                 tem--; 
//             }
//         }
//         cout << ans << "\n";
//     }   
//     return 0;
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
//     while(t--)
//     {
//         ll n, k;
//         cin >> n >> k;
        
//         ll e = (n/2) - ((n-k)/2);

//         if ((k & 1) == (e & 1))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());

        if (n==1||n==2)
        {
            cout << -1 << endl;
            continue;
        }
       
            ll inx = a[n / 2]; 
            ll n_avg = inx * 2;
            ll need = n_avg * n + 1; 
            ll x = need - sum;
            cout << max(0LL,x) << endl;
        
    }
}
