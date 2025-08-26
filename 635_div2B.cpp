#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n,m;
        cin>>x>>n>>m;
        ll f=0;
        if((x<=10&&m>=1))
        {
            cout<<"Yes\n";
            continue;
        }
        while(n!=0)
        {
            x=(x/2)+10;
            n--;
        }
        while(m!=0)
        {
            x=(x-10);
            if(x<=0)
            {
                f=1;
                break;
            }
            m--;
        }
        if(f==1||x<=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
