#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m+1];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int maxi,mx=0,c=0,cn=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           if(b[j]%a[i]==0)
           {
               maxi=b[j]/a[i];
              if(maxi>mx)
              {
                  mx=maxi;
                  cn=1;
              }
              else if(maxi==mx)
                cn++;
             // break;

           }
       }
    }
    cout<<cn<<endl;
}
