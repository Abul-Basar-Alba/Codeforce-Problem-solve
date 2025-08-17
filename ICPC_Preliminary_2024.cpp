#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
      ll n,k;
      cin>>n>>k;
      ll res=0;
      while(n--)
      {
        ll x,y;
        cin>>x>>y;
        res+=(k/x);
        
      }
      cout<<"Case "<<i<<": "<<res<<endl;
      
    }
}

