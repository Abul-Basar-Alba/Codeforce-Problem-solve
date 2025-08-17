#include<bits/stdc++.h>
#define ll ll int
using namespace std;
ll getnum(ll a)
{
    ll mx=0,mn=10;
    while(a>0)
    {
        ll x=a%10;
        a/=10;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    return mn*mx;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,k;
        cin>>a>>k;
        k=k-1;
        while(k--)
        {
           ll ans= getnum(a);
           if(ans==0)break;
           a+=ans;
        }
        cout<<a<<endl;
    }
}
