#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v1(n+3),v2(n+3);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
        }
        ll ans=0,total=0;
        ll dif[n+10];
        dif[0]=v2[0];
        for(int i=1;i<n;i++)
        {
            dif[i]=max(dif[i-1],v2[i]);
        }
        for(int i=0;i<min(n,k);i++)
        {
            total+=v1[i];
            ll r=k-(i+1);
            ll val=total+r*dif[i];
            ans=max(ans,val);
        }
        cout<<ans<<endl;

    }
}
