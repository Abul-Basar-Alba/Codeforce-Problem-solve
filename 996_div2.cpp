//A: Two Frogs
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
//         ll n, a, b;
//         cin >> n >> a >> b; 

//         ll dis = abs(a - b);

//         if (dis % 2 != 1) 
//         {
//             cout << "YES\n"; 
//         } 
//         else 
//         {
//             cout << "NO\n"; 
//         }
//     }

//     return 0;
// }


//B: Crafting

#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        ll cn = 0, rem = 0;
        bool ok = true;
    
        for (int i = 0; i < n; i++) 
        {
            if ((a[i] - b[i]) < 0) 
            {
                cn++;
                rem = abs(a[i] - b[i]); 
            }
        
        }

        if (cn == 0)
        {
            cout << "YES\n";
            continue;
        }
         if (cn > 1) 
         {
            cout << "NO\n";
            continue;
        }
        
        if (cn == 1) 
        {
            for (int i = 0; i < n; i++) 
            {
                if (abs(a[i] - b[i]) >= rem)
                {
                    ok = true; 
                } 
                else 
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}


