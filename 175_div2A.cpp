#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    if(k==0)
      {
          for(int i=0;i<n;i++)
              cout<<v[i]<<' ';
      }
    else if((k+1)==n)
    {
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
            cout<<v[i]<<' ';
    }
    else if(n>k+1)
    {
        vector<ll>v1;
        //ll tem=n-(k+1);
        for(int i=1;i<=n-k-1;i++)
        {
            v1.push_back(i);
        }
        for(int i=n;i>=n-k;i--)
        {
           v1.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            cout<<v1[i]<<' ';
        }
    }
}
