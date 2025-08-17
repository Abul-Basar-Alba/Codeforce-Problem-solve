#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,i,j,dis=0;
    cin>>n;
    ll a[2*n];
    vector<pair<ll,ll>>res;
    for(i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+(2*n));
    for(i=0,j=n;i<n;i++,j++)
    {
        res.push_back({a[i],a[j]});
        if(i>0)
        {
            dis+=(abs(a[i]-a[i-1])+abs(a[j]-a[j-1]));
        }
    }
    cout<<dis<<endl;
    for(auto it:res)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    }
}
