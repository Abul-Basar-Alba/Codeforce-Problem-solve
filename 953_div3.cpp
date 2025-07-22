//B

#include<bits/stdc++.h>
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
        ll n, a, b;
        cin >> n >> a >> b;

        if(a>=b)
        {
            cout<<n*a<<endl;
            continue;
        }
        ll k = min(n,max(0LL,(b-a)));
        ll res=(n-k)*a;
        ll x=(b+b-k+1)*k/2;

        cout <<res+x<< endl;


    }

    return 0;
}


//#include<bits/stdc++.h>
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
//
//    while (t--)
//    {
//        ll n;
//        cin>>n;
//        vector<ll>a(n);
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        ll mx=0;
//        for(int i=0;i<n-1;i++)
//        {
//            mx=max(mx,a[i]);
//        }
//        ll res=mx+a[n-1];
//        cout<<res<<endl;
//    }
//}
