#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll c=0,mx=0;
        for(int i=0;i<n;i++)
        {
            c++;
            if(i==n-1 ||abs(a[i+1]-a[i])>k)
            {
               mx=max(mx,c);
               c=0;
            }
        }

        mx=n-mx;
        cout<<mx<<endl;
    }
}
