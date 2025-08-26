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
        ll x1=0,x2=0,x3=0,x4=0;
        while(n--)
        {
            ll x,y;
            cin>>x>>y;
            if(x>0)
               x1=1;
            else if(x<0)
                x2=1;
            if(y>0)
                x3=1;
            else if(y<0)
                x4=1;
        }
        ll sum=x4+x3+x2+x1;
        if(sum<=3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
