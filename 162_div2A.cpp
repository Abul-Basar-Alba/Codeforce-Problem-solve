#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll f=0,l=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==1)
           {
               f=i;
               break;
           }
        }
        for(int i=n-1;i>=0;i--)
        {
           if(a[i]==1)
           {
               l=i;
               break;
           }
        }
        ll c=0;
        for(int i=f;i<=l;i++)
        {
           if(a[i]==0)
           {
               c++;
               //break;
           }
        }
        cout<<c<<endl;
    }
}
