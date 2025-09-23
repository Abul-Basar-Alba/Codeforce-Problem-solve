#include<bits/stdc++.h>
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
      ll d=4*n-2;
      if(k==d)
      {
          cout<<2*n<<endl;
      }
      else if(k%2!=0)
      {
          cout<<(k+1)/2<<endl;
      }
      else
        cout<<k/2<<endl;
  }
}
