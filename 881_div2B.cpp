#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ll x=abs(a[i]);
            sum+=x;
        }
        ll c=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0&&p==0&&c==0)
            {
               c++;
               //continue;
            }
            else if(a[i]>0)
                p=1;
            else if(p==1&&a[i]<0)
            {
                c++;
                p=0;
            }
        }
        cout<<sum<<' '<<c<<endl;
    }
}
