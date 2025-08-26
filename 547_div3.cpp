//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//        ll n,m;
//        cin >> n>>m;
//        if(n==m)
//        {
//            cout<<0<<endl;
//        }
//        else if(m%n!=0)
//        {
//            cout<<-1<<endl;
//        }
//        //else if()
//        else
//        {
//            ll res=0;
//            while (n < m)
//            {
//                if (m % n == 0 && (m / n) % 2 == 0)
//                {
//                    n *= 2;
//                    res++;
//                }
//                else if (m % n == 0 && (m / n) % 3 == 0)
//                {
//                    n *= 3;
//                    res++;
//                }
//                else
//                {
//                    res = -1;
//                    break;
//                }
//            }
//
//            if (n != m)
//            {
//                res = -1;
//            }
//
//            cout << res << endl;
//        }
//}



//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll n, m;
//    cin >> n >> m;
//    if (n == m)
//    {
//        cout << 0 << endl;
//    }
//    else if (m % n != 0)
//    {
//        cout << -1 << endl;
//    }
//    else
//    {
//        ll res = 0;
//        m /= n;
//        while (m % 2 == 0)
//        {
//            m /= 2;
//            res++;
//        }
//        while (m % 3 == 0)
//        {
//            m /= 3;
//            res++;
//        }
//        if (m != 1)
//        {
//            cout << -1 << endl;
//        }
//        else
//        {
//            cout << res << endl;
//        }
//    }
//}



#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }

    if (a[0] == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                v.push_back(a[i]);
            else
                break;
        }
    }

    ll mx = 0, cn = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            cn++;
        }
        else
        {
            mx = max(mx, cn);
            cn = 0;
        }
    }

    mx = max(mx, cn);
    cout << mx << endl;

    return 0;
}
