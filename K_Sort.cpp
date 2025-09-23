//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//	ll t;
//	cin>>t;
//	while(t--)
//	{
//        ll n;
//        cin >> n;
//
//        vector<ll> a(n);
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> a[i];
//        }
//
//       ll sum = 0L;
//       ll more = 0L;
//       ll K = 0L;
//
//        for (int i = 0; i < n; ++i)
//        {
//            sum += max(0LL, K - a[i]);
//            more = max(more, max(0LL, K - a[i]));
//            K = max(K, a[i]);
//        }
//
//        sum += more;
//
//        cout << sum << "\n";
//    }
//
//    return 0;
//}

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
        ll n,m;
        cin >> n>>m;
        if(n==m)
        {
            cout<<0<<endl;
        }
        else if(m%n!=0)
        {
            cout<<-1<<endl;
        }
        //else if()
        else
        {
            ll res=0;
            while (n < m)
            {
                if (m % n == 0 && (m / n) % 2 == 0)
                {
                    n *= 2;
                    res++;
                }
                else if (m % n == 0 && (m / n) % 3 == 0)
                {
                    n *= 3;
                    res++;
                }
                else
                {
                    res = -1;
                    break;
                }
            }

            if (n != m)
            {
                res = -1;
            }

            cout << res << endl;
        }
}



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
