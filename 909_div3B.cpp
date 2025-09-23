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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
           cin>>v[i];
        }
        ll p=0;
        ll ans=0;
        for(int k=1;k<n;k++)
        {
            if(n%k!=0)
                continue;
            ll mx=LLONG_MIN;
            ll mn=LLONG_MAX;
            for(int i=0;i<n;i+=k)
            {
                for(int j=i;j<i+k;j++)
                {
                    p+=v[j];
                }
                mx=max(mx,p);
                mn=min(mn,p);
                p=0;
            }
            ans=max(ans,mx-mn);
        }
        cout<<ans<<endl;

    }
}
