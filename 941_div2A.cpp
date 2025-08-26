#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll f=0;
        for(auto it:mp)
        {
            if(it.second>=k)
            {
               f=1;
            }
        }
        if(f==1)
            cout<<k-1<<endl;
        else
            cout<<n<<endl;
    }
}
