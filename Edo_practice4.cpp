// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll n;
//     cin >> n;

//     if (n < 2) 
//     {  
//         cout << -1 << endl;
//         return 0;
//     }

//     vector<ll> v(n);
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> v[i];
//     }

   
//     vector<ll> tem = v;
//     sort(tem.begin(), tem.end());
//     ll mx = tem[n-2];  

   
//     ll ans = -1;
//     for (ll i = 0; i < n; i++)
//      {
//         if (v[i] == mx) 
//         {
//             ans = i;
//             break;
//         }
//     }

//     cout << ans + 1 << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;

//     vector<string> v(n);
//     ll mx= 0;

//     for (int i = 0; i < n; i++) 
//     {
//         cin >> v[i];
//         mx = max(mx, (ll)v[i].length());
//     }

//     reverse(v.begin(), v.end());

//     vector<string> res(mx, string(n, '*'));

//     for (int i = 0; i < n; i++)
//      {
//         for (int j = 0; j < v[i].length(); j++) 
//         {
//             res[j][i] = v[i][j];
//         }
//     }

//     for (int i = 0; i < mx; i++) 
//     {
 
//         while (!res[i].empty() && res[i].back() == '*') 
//         {
//             res[i].pop_back();
//         }
//         cout << res[i] << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin >> q;

    map<ll, ll> freq; 
    set<ll> st; 

    while (q--) 
    {
        ll tem;
        cin >> tem;

        if (tem == 1) 
        {
            ll x;
            cin >> x;
            freq[x]++;
            st.insert(x); 
        } 
        else if (tem == 2) 
        {
         
            ll x;
            cin >> x;
            freq[x]--;
            if (freq[x] == 0) 
            {
                st.erase(x); 
            }
        } 
        else if (tem == 3) 
        {
            cout << st.size() << endl;
        }
    }

    return 0;
}
