#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,p;
    cin>>n>>p;
    ll ar[n+3],br[n+3];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
    {
        cin>>br[i];
        v.push_back({min(p,br[i]),ar[i]});
    }
    sort(v.begin(),v.end());
    ll per=n-1;
    ll ans=p;
    for(ll i=0;i<n-1;i++)
    {
        ans+=min(v[i].second,per)*v[i].first;
        per-=min(per,v[i].second);
    }
    cout<<ans<<endl;
    }
}
