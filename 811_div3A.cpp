#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,H,M;
        cin>>n>>H>>M;
        ll mn=INT_MAX;
        while(n--)
        {
            ll h,m;
            cin>>h>>m;
            ll hi=H;
            ll mi=M;
            ll cn=0;
            while(1)
            {
              if(hi==h&&mi==m)
                    break;
              cn++;
              mi++;
              if(mi==60)
              {
                  mi=0;
                  hi++;
                  if(hi==24)
                  {
                      hi=0;
                  }
              }
            }
            mn=min(mn,cn);
        }

        cout<<mn/60<<' '<<mn%60<<endl;
    }

}



//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin >> n;
//        vector<ll> a(n);
//
//        for (int i = 0; i < n;i++)
//        {
//            cin >> a[i];
//        }
//
//        bool ok= false;
//
//        for (int i = 0; i < n;i++)
//        {
//            ok|=is_sorted(a.begin(),a.end());
//            rotate(a.begin(),a.begin()+1,a.end());
//        }
//
//        if (ok)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//
//    return 0;
//}
//
//


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
//        for (int i = 0; i < n; i++)
//        {
//            cin >> a[i];
//        }
//
//        sort(a.begin(), a.end());
//
//        ll mn1 = a[0];
//        vector<ll> v;
//        for (int i = 0; i < n; i++)
//        {
//            if (a[i] % mn1 != 0)
//            {
//                v.push_back(a[i]);
//            }
//        }
//
//        if (v.empty()) {
//            cout << "Yes" << endl;
//            continue;
//        }
//
//        sort(v.begin(), v.end());
//        ll mn2 = v[0];
//        vector<ll> ok;
//        for (int i = 0; i < v.size(); i++)
//        {
//            if (v[i] % mn2 != 0)
//            {
//                ok.push_back(v[i]);
//            }
//        }
//
//        if (ok.empty())
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//
//    return 0;
//}
//
//
