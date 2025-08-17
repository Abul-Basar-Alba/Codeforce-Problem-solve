#include<bits/stdc++.h>
#define ll ll int
using namespace std;
const int inf=3e5;
vector<int>v(inf);
int main()
{
    ll t,ans=0;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
       ans^=i;
    }
    for(ll i=1;i<t;i++)
    {
        ll n;
        cin>>n;
        ans^=n;

    }
    cout<<ans<<'\n';


}
