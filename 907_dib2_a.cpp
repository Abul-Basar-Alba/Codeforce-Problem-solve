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
        ll a[n+5];
        for(ll i=1;i<=n;i++)
            cin>>a[i];
        ll pos=1,chk=1;
        for(ll i=1;i<n;i++)
        {
            if(i==pos)
                pos=pos*2;
            else if(a[i]>a[i+1])
               chk=0;
        }
        cout<< (chk ? "YES" : "NO") <<"\n";

    }
}
