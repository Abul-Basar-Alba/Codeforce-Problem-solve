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
//             ll n;
//             cin>>n;
//             ll cn=0;
//             vector<ll>v(n);
//             ll e=0,odd=0;
//             for(int i=0;i<n;i++)
//             {
//              cin>>v[i];
//              if(v[i]%2==0)
//              e++;
//              else
//              odd++;
//             }
//             ll s=0;
//             if(e>0&&odd>0)
//             {
//                 cout<<odd+1<<endl;
//             }
//             else if(odd==0)
//             cout<<1<<endl;
//             else
//             {
//               for(int i=0;i<n;i++)
//               {
//                 s+=v[i];
//                 if(s%2==0)
//                 {
//                     cn++;
//                     while(s%2==0)
//                     {
//                         s/=2;
//                     }
//                 }
//               }
//               cout<<cn<<endl;
//             }

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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<ll, ll> mp;
        for (int i : v)
        {
            mp[i]++;
        }

        ll cn = 0;
        for (auto i : mp)
        {
            if (i.second >= 2)
                cn++;
        }

        if (cn == 0)
        {
            cout << -1 << endl;
        }
        else if (cn >= 2)
        {
            ll f = 0;
            for (auto i : mp)
            {
                if (i.second >= 2 && f < 2)
                {
                    f++;
                    cout << i.first << " " << i.first << " ";
                }
            }
            cout << endl;
        }
        else
        {
            ll x = 0;
            vector<ll> res;
            for (auto i : mp)
            {
                if (i.second >= 2)
                {
                    x = i.first;
                    res.push_back(i.first);
                    res.push_back(i.first);
                    break;
                }
            }

            sort(v.begin(), v.end());
            ll f = 0;
            bool ok = false;
            ll tem = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == x && f < 2)
                {
                    f++;
                }
                else if (i + 1 < n)
                {
                    ll y = 2 * x;
                    ll a = v[i];
                    ll b = v[i + 1];
                    if (y > abs(a - b) && b != x)
                    {
                        res.push_back(a);
                        res.push_back(b);
                        ok = true;
                    }
                    else if (y > abs(a - b) && b == x && f >= 2)
                    {
                        res.push_back(a);
                        res.push_back(b);
                        ok = true;
                    }
                    else if (tem != 0)
                    {
                        ll y = 2 * x;
                        ll a = tem;
                        ll b = v[i];
                        if (y > abs(a - b))
                        {
                            res.push_back(a);
                            res.push_back(b);
                            ok = true;
                        }
                    }
                    else
                        tem = v[i];
                    if (ok)
                        break;
                }
                else if (tem != 0)
                {
                    ll y = 2 * x;
                    ll a = tem;
                    ll b = v[i];
                    if (y > abs(a - b))
                    {
                        res.push_back(a);
                        res.push_back(b);
                        ok = true;
                    }
                }
            }

            if (ok)
            {
                for (int c : res)
                    cout << c << " ";
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
