/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ll cn=a[0]-1;
    for(ll i=0;i<m-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cn+=n-(a[i]-a[i+1]);
        }
        else if(a[i]<a[i+1])
        {
            cn+=a[i+1]-a[i];
        }
    }
    cout<<cn<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll initial=1;
    ll time=0;
    for(ll i=0;i<m;i++)
    {
        ll present;
        cin>>present;
        if(present>=initial)
        {
            time+=(present-initial);
        }
        else
        {
            time+=n-(initial-present);
        }
        initial=present;
    }
    cout<<time<<endl;
}
