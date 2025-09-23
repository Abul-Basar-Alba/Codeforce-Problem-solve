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
        ll a[n],b[n];
        ll min=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll j=0;j<n;j++)
        {
            cin>>b[j];
        }
        ll sum=0;
        for(ll j=0;j<n;j++)
        {
            sum=sum+a[0]+b[j];
        }
        sort(b,b+n);
        for(ll i=0;i<n;i++)
        {
            min=min+b[0]+a[i];
        }
        if(min<sum)
            cout<<min<<endl;
        else
            cout<<sum<<endl;
        /*for(ll i=0;i<n;i++)
        {
            ll sum=0;
            for(ll j=0;j<n;j++)
            {
                sum=sum+a[i]+b[j];
            }
            if(min>sum)
            {
                min=sum;
            }
        }*/

        //cout<<min<<endl;
    }
}
