// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
    
//         ll t;
//         cin>>t;
//         while(t--)
//         {
//             string s;
//             cin>>s;
//             ll cn=0;
//             for(int i=0;i<s.size();i++)
//             {
//               if(s[i]=='1')
//               cn++;
//             }
//             cout<<cn<<endl;
//         }
// }


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
        ll n;
        cin >> n;
        vector<ll> a(n);
        bool ok = true;

        for (ll i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) 
        {
           ll tem=max((n-i-1),(i));
            
            if (tem*2>=a[i]) 
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

