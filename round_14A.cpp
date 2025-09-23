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
        ll a[n+3],sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        //sort(a,a+n);
        if(x==sum)
        {
           cout<<"NO\n";
           return 0;
        }
            cout<<"YES\n";
            for(ll i=0;i<n;i++)
            {
                if(x==a[i])
                {
                    swap(a[i],a[i+1]);
                }
                cout<<a[i]<<' ';
                x-=a[i];
            }
            cout<<endl;

    }
}
