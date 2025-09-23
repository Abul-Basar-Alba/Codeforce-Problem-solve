#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll res=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        ll f,t;
        cin>>f>>t;
        ll cur=f;
        if(t>k)
        {
            cur-=(t-k);
        }
        res=max(res,cur);
    }
    cout<<res<<endl;
}
