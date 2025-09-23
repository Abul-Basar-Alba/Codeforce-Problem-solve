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
//         cin >> n;
//         if(n%3==1)
//         {
//             cout<<"YES\n";
//         }
//         else
//         {
//             cout<<"NO\n";
//         }
//     }
// }


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        
        vector<ll> v(n);
       
        for(ll i = 0; i < n; i++)
        {
            v[i] = n - i;
        }
        
        vector<ll> pre(n);
        pre[0] = v[0];
        
        for(ll i = 1; i < n; i++)
        {
            pre[i] = pre[i-1] + v[i];
        }

        for(int i = 0; i < n-1; i++)  
        {
            ll x = sqrt(pre[i]);
            if(x * x == pre[i])
            {
                swap(v[i], v[i+1]);
            }
        }
        ll x = sqrt(pre[n-1]);
        if(pre[n-1] == x*x)
        {
            cout << -1 << endl;
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";  
    }
}
