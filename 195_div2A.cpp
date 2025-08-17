#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
        ll x,y;
        cin>>x>>y;
        if(x<0&&y<0)
        {
            ll ans=x+y;
            cout<<ans<<' '<<0<<' '<<0<<' '<<ans<<endl;
        }
        else if(x<0&&y>0)
        {
            ll ans=abs(x)+abs(y);
            cout<<-ans<<' '<<0<<' '<<0<<' '<<ans<<endl;
        }
        else if(x>0&&y<0)
        {
            ll ans=abs(x)+abs(y);
            cout<<0<<' '<<-ans<<' '<<ans<<' '<<0<<endl;
        }
        else if(x>0&&y>0)
        {
            ll ans=x+y;
            cout<<0<<' '<<ans<<' '<<ans<<' '<<0<<endl;
        }

}
