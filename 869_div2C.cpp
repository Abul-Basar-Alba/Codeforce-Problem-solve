#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
        ll n,q;
        cin>>n>>q;
        ll a[n+2];
        vector<ll>pef(n+2,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<=n;i++)
        {
            pef[i]=pef[i-1];
            if(i-2>0&&a[i-2]>=a[i-1]&&a[i-1]>=a[i])
            {
               pef[i]++;
            }
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            ll len=r-l+1;
            if(len<3)
                cout<<len<<endl;
            else
            {
                ll bug=pef[r]-pef[l-1];
                for(int i=l;i<=l+1;i++)
                {
                    if(i-2>0&&a[i-2]>=a[i-1]&&a[i-1]>=a[i])
                        bug--;
                }
                cout<<len-bug<<endl;
            }
        }
}
