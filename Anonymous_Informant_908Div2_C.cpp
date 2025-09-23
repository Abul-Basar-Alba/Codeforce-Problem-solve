#include <bits/stdc++.h>
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
       k=min(n,k);
       vector<ll>v(n);
       for(ll i=0;i<n;i++)
            cin>>v[i];
       ll last=n-1;
       bool ans=true;
       for(ll i=0;i<k;i++)
       {
           if(v[last]>n)
           {
               ans=false;
               break;
           }
           ll def=n-v[last];
           last=(def+last)%n;
       }
       if(ans)
       cout<<"YES\n";
       else
        cout<<"NO\n";


    }
}
