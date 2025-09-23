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
        vector<ll>v;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll avg=sum/n;
        if(n==1)
        {
          cout<<"YES\n";
            continue;
        }
        if(a[0]<avg)
        {
            cout<<"NO\n";
            continue;
        }
        ll f=0;
        v.push_back(a[0]);
        for(int i=0;i<n-1;i++)
        {
            a[i+1]=a[i+1]+(v[i]-avg);
            v.push_back(a[i+1]);
                if(a[i+1]<avg)
                {
                    f=1;
                    break;
                }
        }
        if(f==1)
         cout<<"NO\n";
        else
         cout<<"YES\n";

    }
}
