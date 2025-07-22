//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll x,n;
//        cin>>x>>n;
//        if(x%2==0)
//        {
//            if(n%4==0)
//                cout<<x<<endl;
//            else if(n%4==1)
//            {
//                cout<<x-n<<endl;
//            }
//            else if(n%4==2)
//                cout<<x+1<<endl;
//            else if(n%4==3)
//                cout<<x+n+1<<endl;
//        }
//        else
//        {
//          if(n%4==0)
//                cout<<x<<endl;
//            else if(n%4==1)
//            {
//                cout<<x+n<<endl;
//            }
//            else if(n%4==2)
//                cout<<x-1<<endl;
//            else if(n%4==3)
//                cout<<x-n-1<<endl;
//        }
//    }
//}
//



//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//        vector<ll> a(n);
//        for (int i = 0; i < n; i++)
//            cin >> a[i];
//        if (n == 1)
//        {
//            cout << a[0] << endl;
//            continue;
//        }
//        sort(a.rbegin(), a.rend());
//        ll tem = 0, mx = 0;
//        while (a.size() > 1)
//        {
//            ll x = a.size();
//            sort(a.rbegin(), a.rend());
//            tem = a[x - 1];
//            mx = max(mx, tem);
//            a.pop_back();
//            for (int i = 0; i < a.size(); i++)
//            {
//                a[i] -= tem;
//            }
//        }
//        mx = max(mx, a[0]);
//        cout << mx << endl;
//    }
//}


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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }

        sort(a.begin(), a.end());

        ll mx=a[0];

        for (int i = 1; i < n; i++)
        {
            mx = max(mx, a[i] - a[i - 1]);
        }

        cout << mx << endl;
    }
    return 0;
}
