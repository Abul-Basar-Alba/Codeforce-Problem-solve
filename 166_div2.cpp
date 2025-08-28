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
//
//        ll n;
//        cin>>n;
//        string s;
//        cin>>s;
//        if(is_sorted(s.begin(),s.end()))
//        {
//            cout<<"YES\n";
//        }
//        else
//            cout<<"NO\n";
//    }
//}
//


#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> b(n+1);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i <= n; i++)
            cin >> b[i];
        ll res=0;
        for(int i=0;i<n;i++)
        {
           res+=abs(a[i]-b[i]);
        }
        ll f=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ll x=min(a[i],b[i]);
            ll y=max(a[i],b[i]);
            if(b[n]>=x&&y>=b[n])
            {
                f=0;
            }
            else
            {
                f=min(f,abs(x-b[n]));
                f=min(f,abs(y-b[n]));
            }
        }

          res+=(f+1);
        cout << res << endl;
    }
    return 0;
}
