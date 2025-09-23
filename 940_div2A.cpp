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
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans=0;
        for(auto it:mp)
        {
            if(it.second>=3)
            {
              ans+=it.second/3;
            }
        }
        cout<<ans<<endl;
    }
}
