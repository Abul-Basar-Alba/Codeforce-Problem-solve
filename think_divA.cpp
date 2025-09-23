#include<bits/stdc++.h>
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
      ll a[2*n];
      for(int i=0;i<2*n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+2*n);
      ll sum=0;
      for(int i=0;i<2*n;i+=2)
      {
          sum+=min(a[i],a[i+1]);
      }
      cout<<sum<<endl;
  }
}
