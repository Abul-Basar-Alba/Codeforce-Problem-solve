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
      vector<int>v;
    ll l=1,r=n;

      for(int i=0;i<n;i++)
      {
          if(i%2==0)
          v.push_back(l++);
          else
            v.push_back(r--);
      }


    for(int i=0;i<v.size();i++)
      {
          cout<<v[i]<<' ';
      }
      cout<<endl;
  }
}
