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
      ll n;
        cin>>n;
        ll x,y;
        cin>>x>>y;
        ll mn=min(x,y);
        cout<<(n+mn-1)/mn<<endl;
    }
  }