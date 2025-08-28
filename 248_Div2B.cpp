#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{

    ll n;
    cin>>n;
    ll a[n+2];
    ll b[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    ll pre[n+2];
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    sort(b+1,b+n+1);
    ll p[n+2];
    p[0]=0;
    for(int i=1;i<=n;i++)
     {
       p[i]=p[i-1]+b[i];
     }
    ll m;
    cin>>m;
    while(m--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1)
        {
                cout<<pre[r]-pre[l-1]<<endl;
        }
        else
               cout<<p[r]-p[l-1]<<endl;
    }
}
