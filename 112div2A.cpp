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
        if(n<=6)
        {
            cout<<15<<endl;
            continue;
        }
        if(n<=8)
        {
            cout<<20<<endl;
            continue;
        }
        if(n<=10)
        {
            cout<<25<<endl;
            continue;
        }
        ll ans= (n/10)*25;
        if(n%10==0)
            cout<<ans<<endl;
        else if(n%10<=2)
        {
            ans+=5;
            cout<<ans<<endl;
        }
        else if(n%10<=4)
        {
            ans+=10;
            cout<<ans<<endl;
        }
        else if(n%10<=6)
        {
            ans+=15;
            cout<<ans<<endl;
        }
        else if(n%10<=8)
        {
            ans+=20;
            cout<<ans<<endl;
        }
        else
        {
            ans+=25;
          cout<<ans<<endl;
        }

    }
}
