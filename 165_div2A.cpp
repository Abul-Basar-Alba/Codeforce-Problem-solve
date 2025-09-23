#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll ans=3;
        for(int i=1;i<=n;i++)
        {
            if(a[a[i]]==i)
                ans=2;
        }
        cout<<ans<<endl;
    }
}
