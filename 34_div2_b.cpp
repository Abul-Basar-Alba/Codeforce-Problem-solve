#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mony=0;
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(m>0)
        {
           if(a[i]<0)
                mony+=abs(a[i]);
           m--;
        }
        if(m==0)
            break;
    }
    cout<<mony<<endl;
}
