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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        ll cur=v[n-1];
        ll f=0;
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]<=cur)
                cur=v[i];
            else
            {
                while(v[i]!=0)
                {
                ll rem=v[i]%10;
                v[i]/=10;
                if(rem>cur)
                    f=1;
                else
                    cur=rem;
                }
            }
        }
        if(f==0)
            cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
