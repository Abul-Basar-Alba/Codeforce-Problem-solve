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
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll z=0;
        ll neg=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
                neg++;
            if(a[i]==0)
                z++;
        }
        if(z!=0||neg%2!=0)
            cout<<0<<endl;
        else
        {
            ll ind=0;
            cout<<1<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]<0)
                   ind=i;
            }
            cout<<ind+1<<' '<<0<<endl;
        }
    }
}
