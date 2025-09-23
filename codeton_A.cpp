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
        if(k==1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<' ';
            }
            cout<<endl;
        }
        else if(n==k)
        {
            for(int i=0;i<n;i++)
            {
                cout<<'1'<<' ';
            }
            cout<<endl;
        }
        else
        {
           cout<<-1<<endl;
        }
    }
}
