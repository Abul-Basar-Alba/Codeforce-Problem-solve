#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
       ll sum=0;
       for(int k=0;k<n;k++)
       {
        ll i=0,j=k,mn=0;
        while(i<n&&j<n)
        {
            if(a[i][j]<0)
            mn=min(mn,a[i][j]);
            i++,j++;
        }
        sum+=abs(mn);
       }
       for(int k=1;k<n;k++)
       {
        ll i=k,j=0,mn=0;
        while(i<n&&j<n)
        {
            if(a[i][j]<0)
            mn=min(mn,a[i][j]);
            i++,j++;
        }
        sum+=abs(mn);
       }
       cout<<sum<<endl;
    }
}