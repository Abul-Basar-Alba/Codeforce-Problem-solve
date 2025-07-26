/*#include<bits/stdc++.h>
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
        if(n%2!=0)
        {
            cout<<"NO\n";
            continue;
        }
        ll x=n/2;
        ll sq=sqrt(x);
        if(sq*sq==x)
        {
            cout<<"YES\n";
            continue;
        }
        sq=sqrt(n);
        if(sq*sq==n&&sq%2==0)
        {
           cout<<"YES\n";
           continue;
        }
        else
          cout<<"NO\n";

    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
     map<ll,ll>mp;
    ll ans=4;
    mp[2]=1;
    mp[4]=1;
    ll i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=4;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    ans=2;
    i=1;
    while(ans<=1e9)
    {
        ll an=i+i+1;
        an*=2;
        ans+=an;
        mp[ans]=1;
        i++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(mp[n]==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

