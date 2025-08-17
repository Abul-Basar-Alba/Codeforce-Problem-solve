#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll r[n];
    int mn=INT_MAX;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>r[i];
        if(mx<r[i])
            mx=r[i];
        if(mn>r[i])
            mn=r[i];
    }
    int mn_l=INT_MAX;
    ll w[m];
    for(int i=0;i<m;i++)
    {
        cin>>w[i];
        if(mn_l>w[i])
            mn_l=w[i];
    }
    int ans=max((2*mn),mx);
    if(ans<mn_l)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
}
