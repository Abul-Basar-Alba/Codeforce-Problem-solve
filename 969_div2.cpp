
//A

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) 
    {
        ll l, r;
        cin >> l >> r;
        if(l % 2 == 0)
            l++;
        
        vector<ll> v;
        ll cnt=0;
        for (int i = l; i <= r; i++) 
        {
            cnt++;
            if(cnt==4)
            {
                cnt=0;
                continue;
            }
            v.push_back(i);
        }
        
        ll res = 0;
        res=v.size()/3;
        cout << res << endl;
    }
    
    return 0;
}



//B

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
//  {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll t;
//     cin >> t;
    
//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<ll> a(n);
        
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }
        
//         ll mx = *max_element(a.begin(), a.end());
//         vector<ll> v;
        
//         while (m--) 
//         {
//             char c;
//             ll l, r;
//             cin >> c >> l >> r;
            
//             if (c == '+' && r >= mx && l <= mx)
//             {
//                 mx++;
//             } 
//             else if (c == '-' && r >= mx && l <= mx) 
//             {
//                 mx--;
//             }
            
//             v.push_back(mx);
//         }
    
//         for (ll i : v) 
//         {
//             cout << i << ' ';
//         }
//         cout << endl;
//     }
// }
