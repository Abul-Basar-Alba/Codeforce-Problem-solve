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
//      vector<ll>a(n);
//      for(int i=0;i<n;i++)
//        cin>>a[i];
//      if(n==2&&a[1]-a[0]>=2)
//      {
//        cout<<"YES\n";
//
//      }
//      else
//        cout<<"NO\n";
//    }
//    return 0;
//}


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
//      ll l,r,L,R;
//      cin>>l>>r>>L>>R;
//
//          ll mn=min(R,r);
//          ll mx=max(L,l);
//        if(mx<=mn)
//        {
//            ll ans=mn-mx;
//            if(mx>l||mx>L)
//                ans++;
//            if(mn<r||mn<R)
//                ans++;
//            ans=max(ans,1LL);
//            cout<<ans<<endl;
//        }
//        else
//            cout<<1<<endl;
//
//    }
//    return 0;
//}


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
//      ll n,k;
//      cin>>n>>k;
//      vector<ll>a(n);
//      multiset<ll>ms;
//      for(int i=0;i<n;i++)
//      {
//          cin>>a[i];
//          ms.insert(a[i]);
//      }
//      sort(a.begin(),a.end());
//      sort(ms.begin(),ms.end());
//      if(a[0]==a[n-1])
//      {
//          cout<<0<<endl;
//          continue;
//      }
//      vector<ll>v;
//      ll mx=a[n-1];
//
//      v.push_back(mx);
//      while(k!=0||v.size()!=n)
//      {
//        auto *mn=ms.begin();
//        ll x=mx-mn;
//        if(k>=x)
//        {
//            mn+=x;
//            k-=x;
//            v.push_back(mn);
//            ms.erase();
//            mn=0;
//        }
//        else
//        {
//          mn+=k;
//          v.push_back(mn);
//          ms.erase();
//          k-=k;
//          break;
//        }
//      }
//      if(v.size()==n)
//      {
//          cout<<0<<endl;
//          continue;
//      }
//      if(v.size()!=n)
//      {
//          while(!ms.empty())
//          {
//              auto *it=ms.begin();
//              v.push_back(it);
//              ms.erase();
//          }
//      }
//      sort(v.begin(),v.end());
//      ll alice=0;
//      ll bob=0;
//      for(int i=n-1;i>=0;i-=2;)
//      {
//          alice+=v[i];
//      }
//      for(int i=n-2;i>=0;i-=2)
//        bob+=v[i];
//      ll res=alice-bob;
//      cout<<res<<end;
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        ll alice=0,bob=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            alice+=a[i];
            else
            {
                bob+=a[i];
                if(k>0)
                {
                ll add=a[i-1]-a[i];
                if(add<=k)
                {
                    bob+=add;
                    k-=add;
                }
                else
                {
                    bob+=k;
                    k=0;
                }
                }
            }
        }

        cout << alice - bob << endl;
    }
    return 0;
}
