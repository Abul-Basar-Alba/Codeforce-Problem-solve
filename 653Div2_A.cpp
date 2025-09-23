#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        //ll ans=n-(n%x)+y;
        ll ans=n%x;
        if((ans-y)>=0)
        {
            n=n-(ans-y);
            cout<<n<<endl;

        }
        else
        {
             n=n-ans-(x+y);
             cout<<n<<endl;
        }

        /*if(n%x==y)
            cout<<n<<endl;
        else if(x%2!=0&&y==0)
            cout<<0<<endl;
        else
        {
            while(n--)
            {
                if(n%x==y)
                {
                    cout<<n<<endl;
                    break;
                }
            }
        }*/
    }
}
