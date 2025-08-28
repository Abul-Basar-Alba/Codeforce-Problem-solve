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
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
            ll w=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]==0)
                continue;
            else if(a[i]<0)
                w=1;
            else
            {
                a[i+1]-=2*(a[i]);
                a[i+2]-=a[i];
            }
        }
        if(w==0&&a[n-2]==0&&a[n-1]==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
