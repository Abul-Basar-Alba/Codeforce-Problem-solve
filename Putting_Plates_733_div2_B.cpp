#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n+3][m+3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)ar[i][j]=0;
        }
       for(int i=0;i<m;i+=2)ar[0][i]=1;
       for(int j=2;j<n;j+=2)
       {
           ar[j][0]=1;
           ar[j][m-1]=1;
       }
       for(int i=2;i<m-2;i+=2)ar[n-1][i]=1;

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)cout<<ar[i][j];
           cout<<endl;
       }

    }
    return 0;

}
