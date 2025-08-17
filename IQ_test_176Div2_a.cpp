#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    char s[n][n];
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
          int b=0,w=0;
          if(s[i][j]=='#')
            b++;
          else
            w++;
          if(s[i+1][j]=='#')
            b++;
          else
            w++;
          if(s[i][j+1]=='#')
            b++;
          else
            w++;
          if(s[i+1][j+1]=='#')
            b++;
          else
            w++;

          if(b>=3||w>=3)
          {
              cout<<"YES\n";
              return 0;
          }
          //ans=true;
      }
    }
    cout<<"NO\n";
}
