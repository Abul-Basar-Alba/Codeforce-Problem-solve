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
      vector<ll>a(n);
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      if(is_sorted(a.begin(),a.end()))
      {
          ll c=max(n,a[n-1]);
          cout<<c<<endl;
          continue;
      }
      //sort(a.begin(),a.end());
      ll ans=a[0];
      for(int i=1;i<n;i++)
      {
          if(a[i]>ans)
            ans=a[i];
          else
          ans=(ans/a[i]+1)*a[i];
      }
      cout<<ans<<endl;
  }
}*/
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
      vector<ll>a(n);
      ll inl=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          inl=inl+(a[i]-(inl%a[i]));
      }
      cout<<inl<<endl;
      /*ll ans=0;
      for(int i=0;i<n;i++)
      {
          if(a[i]>ans)
          {
              ans=a[i];
          }
          else
          {
              ll j=0;
              while(1)
              {
                  ll x=a[i]*j;
                  if(x>ans)
                  {
                      ans=x;
                      break;
                  }
                  j++;
              }
          }
      }
      cout<<ans<<endl;*/
  }
}
