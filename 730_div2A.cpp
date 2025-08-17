#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    ll a,b;
    cin >>a>>b;
    if(a==b)
    {
        cout<<0<<' '<<0<<endl;
        continue;
    }
    ll x=abs(a-b);
    if(a%x!=b%x)
    {
        cout<<0<<' '<<0<<endl;
    }
    else
    {
        if(a%x!=0)
        {
        ll y=abs(x-(a%x));
        ll mn=min(y,a%x);
        cout<<x<<' '<<mn<<endl;
        }
        else
        {
            cout<<x<<' '<<0<<endl;
        }
    }
    }
}
