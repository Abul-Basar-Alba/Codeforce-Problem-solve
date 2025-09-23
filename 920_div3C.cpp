#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        ll s[n+2];
        ll c=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
               c=s[i];
            else
                c=s[i+1]-s[i];
            ll mn=min((c*a),(b*a));
            f-=mn;
        }
        if(f>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
