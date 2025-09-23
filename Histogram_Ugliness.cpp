#include <bits/stdc++.h>
using namespace std;

typedef ll ll;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      vector<ll>v;
      v.push_back(0);
      for(int i=0;i<n;i++)
      {
          ll x;
          cin>>x;
          v.push_back(x);
      }
      v.push_back(0);
      ll c=0;
      for(int i=1;i<=n;i++)
      {
          if(v[i]>v[i+1]&&v[i]>v[i-1])
          {
              ll mx=max(v[i+1],v[i-1]);
              c+=v[i]-mx;
              v[i]=mx;
          }
      }
      ll sum=0;
      for(int i=1;i<=n+1;i++)
      {
          sum+=abs(v[i]-v[i-1]);
      }
      sum+=c;
      cout<<sum<<endl;
  }
}
