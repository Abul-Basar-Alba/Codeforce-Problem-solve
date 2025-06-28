//
//every row who elements max
//
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3,m=3;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        int mx=0;
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
           mx=max(mx,ar[i][j]);
        }
        cout<<mx<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"hello\n";
}
/*#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }

    int pre[n][m];
    pre[0][0]=ar[0][0];
    for(int i=1;i<m;i++)pre[0][i]=pre[0][i-1]+ar[0][i];
    for(int i=1;i<n;i++)pre[i][0]=pre[i-1][0]+ar[i][0];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            pre[i][j]=pre[i][j-1]+pre[i-1][j]+ar[i][j]-pre[i-1][j-1];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<pre[i][j]<<" ";
        cout<<endl;
    }

}*/

