
//A. Game of Division

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n, k;
//         cin >> n >> k;
//         vector<ll> a(n);
//         for(int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }
        
//         bool found = false;
//         ll inx = -1;
//         for(int i = 0; i < n; i++) 
//         {
//             bool win = true;
//             for(int j = 0; j < n; j++) 
//             {
//                 if (i != j && abs(a[i] - a[j]) % k == 0) 
//                 {
//                     win = false;
//                     break;
//                 }
//             }
//             if (win) 
//             {
//                 found = true;
//                 inx = i + 1;
//                 break;
//             }
//         }
        
//         if (found) 
//         {
//             cout << "YES\n" << inx << endl;  
//         }
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }

//B. Paint a Strip

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    map<ll, ll> mp;
    ll f = 2; 
    
    mp[1] = 1;
    mp[4]=2;
    ll x = 4; 
    ll c = 3; 

    while (x <= 100000) 
    {
        c *= 2; 
        x += c; 
        f++;
        mp[x] = f; 
    }

    while (t--) 
    {
        ll n;
        cin >> n;
        auto it = mp.lower_bound(n); 
        if (it != mp.end())
            cout << it->second << endl; 
    }
    
    return 0;
}
