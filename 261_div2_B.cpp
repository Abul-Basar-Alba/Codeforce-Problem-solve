#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
  ll n;
  cin>>n;
  ll ar[n+3];
  for(ll i=0;i<n;i++)
  {
      cin>>ar[i];
  }
  sort(ar,ar+n);
  ll cnt1=0,cnt2=0;
  for(ll i=0;i<n;i++)
  {
      if(ar[i]==ar[0])
        cnt1++;
      if(ar[i]==ar[n-1])
       cnt2++;
  }
  if(ar[n-1]-ar[0]==0)
    cout<<ar[n-1]-ar[0]<<' '<<n*(n-1)/2<<endl;
  else
    cout<<ar[n-1]-ar[0]<<' '<<cnt1*cnt2<<endl;
}
