#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           sum+=a[i];
        }
        ll m=sum%n;
        ll ans=(n-m)*m;
        cout<<ans<<endl;
    }
}
