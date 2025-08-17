#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+1],b[m+2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
           cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        reverse(b,b+m);

        ll ans=0;
        ll i=0,l=0,j=n-1,r=m-1;
        while(i<=j)
        {
            ll x=abs(a[i]-b[l]);
            ll y=abs(a[j]-b[r]);
            ll mx=max(x,y);
            ans+=mx;

            if(x==mx)
            {
                i++;
                l++;
            }
            else if(y==mx)
            {
                j--;
                r--;
            }
        }
        cout<<ans<<endl;;
    }
}

