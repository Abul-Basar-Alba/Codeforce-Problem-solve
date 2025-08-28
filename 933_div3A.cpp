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
        ll n,m,k;
        cin>>n>>m>>k;
        ll l[n],r[m];
        for(int i=0;i<n;i++)
            cin>>l[i];
            sort(l,l+n);
        for(int i=0;i<m;i++)
            cin>>r[i];
            sort(r,r+m);
        ll res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll x=l[i]+r[j];
                if(x<=k)
                    res++;
            }
            if(l[i]>k)
                break;
        }
        cout<<res<<endl;
    }
}
