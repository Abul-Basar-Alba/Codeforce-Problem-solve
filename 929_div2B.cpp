#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll r1=0,r2=0,sum=0;

        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           sum+=a[i];
           if(a[i]%3==1)
                r1++;
           else if(a[i]%3==2)
                r2++;
        }
        if(sum%3==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(sum%3==1)
        {
            if(r1>0)
                cout<<1<<endl;
            else if(r2>1)
                cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
}

