#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n+2),pos(n+2,0);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            pos[abs(x)]+=v[i];
        }
        ll bul=k;
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            bul-=pos[i];
            if(bul<0)
                f=false;
            bul+=k;
        }
        if(f)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
