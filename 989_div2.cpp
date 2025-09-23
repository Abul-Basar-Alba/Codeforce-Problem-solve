
//A. King Keykhosrow's Mystery

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//       ll a,b;
//       cin>>a>>b;
//       ll m;
//       for(int i=1;;i++)
//       {
//         if(i%a==0&&i%b==0)
//         {
//             m=i;
//             break;
//         }
//       }
//       cout<<m<<endl;
//     }
// }


//B. Rakhsh's Revival

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
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        ll c = 0;
        ll res= 0;

        for (int i = 0; i < n; ++i) 
        {
            if (s[i] == '0') 
            {
                c++;
            } else {
                c = 0;
            }

            if (c >= m) 
            {
                
                res++;
                c = 0; 
                i += (k - 1); 
            }
        }

        cout << res << endl;
    }

    return 0;
}


