#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;
        ll ans=0;
        //ll d=__gcd(x,n);
        for(ll i=1;i<=x;i++)
        {
            if(x/i>=n&&x%i==0)
                ans=min(ans,i);
             if(x/i<n)
                break;
        }
        cout<<ans<<endl;
    }
}
