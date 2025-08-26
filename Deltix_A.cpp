/*#include<bits/stdc++.h>
#define ll ll
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
           cin>>a[i];
        }
        ll cn=0;
        ll mx=0;
        ll ans=0;
        //vector<int>v;
        for(ll i=0;i<n;i++)
        {
            while(a[i]%2==0)
            {
                    cn++;
                    a[i]=a[i]/2;
            }
            ans+=a[i];
            mx=max(mx,a[i]);
        }
        //mx=max_element(v.begin(),v.end());

        ll y=mx;
        for(ll i=1;i<=cn;i++)
        {
            y*=2;
        }
        ans+=y;
        ans-=mx;
        cout<<ans<<endl;
    }
}*/
#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cn = 0;
        ll mx=0;
        ll ans=0;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            while (a[i] % 2 == 0)
            {
                cn++;
                a[i] = a[i] / 2;
            }
            ans+=a[i];
                v.push_back(a[i]);
        }
        if (!v.empty())
        {
            auto it = max_element(v.begin(), v.end());
            mx = *it;
        }
        ll y= mx;
        for (ll i = 1; i <= cn; i++)
        {
            mx*= 2;
        }
        mx = mx + ans;
        mx-=y;
        cout << mx << endl;
    }
    return 0;
}

