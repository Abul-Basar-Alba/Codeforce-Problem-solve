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
//        for(int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//
//        vector<ll> v = a;
//        sort(v.begin(), v.end());
//
//        ll ans = 0;
//        for(int i = n-1; i >=0; i--)
//        {
//            for(int j = 0; j < n; j++)
//            {
//                if(v[i] == a[j] && j % 2 == 0)
//                {
//                    ans = v[i];
//                    break;
//                }
//            }
//            if(ans != 0)
//                break;
//        }
//        cout << ans << endl;
//    }
//    return 0;
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
        vector<ll> b(n-1);
        for(int i = 0; i < n-1; i++)
        {
            cin >> b[i];
        }

        vector<ll>a(n);
        a[0]=b[0];
        a[n-1]=b[n-2];
        for(int i=1;i<n-1;i++)
        {
            a[i]=b[i-1]|b[i];
        }
        vector<ll>ans(n-1);
        for(int i=0;i<n-1;i++)
        {
            ans[i]=a[i]&a[i+1];
        }
        if(ans==b)
        {
            for(int i:a)
                cout<<i<<' ';
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

