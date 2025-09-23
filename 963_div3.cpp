//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//      ll n;
//      cin>>n;
//      string s;
//      cin>>s;
//      ll res=0,a=0,b=0,c=0,d=0;
//      for(int i=0;i<4*n;i++)
//      {
//          if(s[i]=='A')
//          a++;
//          else if(s[i]=='B')
//            b++;
//          else if(s[i]=='C')
//            c++;
//          else if(s[i]=='D')
//            d++;
//      }
//      res+=min(n,a);
//      res+=min(n,b);
//      res+=min(n,c);
//      res+=min(n,d);
//      cout<<res<<endl;
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

#define ll ll
#define all(x) x.begin(),x.end()
#define FastIO ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

int main()
{
    FastIO;
    ll T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> even, odd;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        if (even.empty() || odd.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());

        ll res = 0;
        ll mx_odd = odd[0];

        for (ll even_val : even)
        {
            if (even_val < mx_odd)
            {
                mx_odd += even_val;
            }
            else
            {
                res++;
                break;
            }
        }

        if(res)
        cout << even.size()+res << endl;
        else
        cout<<even.size()<<endl;
    }
    return 0;
}


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//        vector<ll> a(n);
//        vector<ll> even, odd;
//
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//            if (a[i] % 2 == 0)
//            {
//                even.push_back(a[i]);
//            }
//            else
//            {
//                odd.push_back(a[i]);
//            }
//        }
//
//        if (even.empty() || odd.empty())
//        {
//            cout << 0 << endl;
//            continue;
//        }
//
//        sort(even.begin(), even.end());
//
//        sort(odd.rbegin(), odd.rend());
//
//        ll res = 0;
//        ll mx_odd = odd[0];
//
//        for (ll even : even)
//        {
//            if (even < mx_odd)
//            {
//                res++;
//                mx_odd+=even;
//            }
//            else
//            {
//              while(even>mx_odd)
//              {
//                  mx_odd+=even;
//                  res++;
//              }
//              res++;
//            }
//        }
//
//        cout << res << endl;
//    }
//    return 0;
//}
