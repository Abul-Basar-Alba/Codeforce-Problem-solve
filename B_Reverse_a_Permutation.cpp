#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    vector<ll> p(n+1);
    for(ll i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    vector<ll> q(n+1);
    ll mx=0,r=-1,l=-1;
    
    ll cnt=n;
    for(ll i=1;i<=n;i++)
    {
        if(p[i]!=cnt)
        {
            l=i;
            break;
        }
        cnt--;
    }
    for(ll i=1;i<=n;i++)
    {
        if(p[i]==cnt)
        {
            r=i;
        }
    }
if(l != -1 && r != -1 && l < r)
{
    reverse(p.begin()+l, p.begin()+r+1);
}

 for(ll i=1;i<=n;i++)
 {
     cout<<p[i]<<" ";
 }
 cout<<endl;
}
    return 0;
}