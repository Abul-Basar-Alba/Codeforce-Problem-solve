#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll mx=0;
        mx=max(mx,a[0]);
        for(int i=0;i<n-1;i++)
        {
            ll y=abs(a[i+1]-a[i]);
            mx=max(mx,y);
        }
        ll c=(x-a[n-1])*2;
        mx=max(mx,c);
        cout<<mx<<endl;

    }
}
