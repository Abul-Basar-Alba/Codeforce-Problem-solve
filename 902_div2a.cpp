#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        ll a[n-1];
        for(ll i=0;i<n-1;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum=-sum;
        cout<<sum<<endl;
    }
}
