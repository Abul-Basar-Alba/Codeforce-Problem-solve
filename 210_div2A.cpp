#include<bits/stdc++.h>
using namespace std;
const int mx=100;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[100][100];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(i==j)
            cout<<k<<' ';
          else
            cout<<0<<' ';
      }
      cout<<endl;
  }
}
