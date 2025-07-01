#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n>m)swap(n,m);
        ll sz=n*m;
        vector<ll>v(sz);
        for(int i=0;i<sz;i++)
        {
          cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll mx=v[sz-1];
        ll mn1=v[0];
        ll mn2=v[1];
        
            ll x=(m*(n-1))*(v[sz-1]-v[0]);
            ll res=(x+((n-1)*(v[sz-1]-v[1])));
            cout<<res<<endl;
        
    }
}