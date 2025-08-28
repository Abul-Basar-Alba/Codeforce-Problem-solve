#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll v[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v[i][j]=a[i][j];
            }
        }
        if(n==1&&m==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(m==1)
        {
         for(int i=0;i<n-1;i++)
         {
            for(int j=0;j<m;j++)
            {
                swap(a[i][j],a[i+1][j]);
            }
         }
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                swap(a[i][j],a[i][j+1]);
            }
        }
        }
        if(a==v)
            cout<<-1<<endl;
        else
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<' ';
            }
            cout<<endl;
        }
        }
    }
}

