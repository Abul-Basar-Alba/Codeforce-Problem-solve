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
        if(n<2020)
            cout<<"NO\n";
        else
            {
                ll x=n/2020;
                ll rem=n%2020;
                if(rem>x)
                    cout<<"NO\n";
                else
                    cout<<"YES\n";
            }
       /* else if(n==2020||n==2021)
            cout<<"YES\n";
        else if(n>2020)
        {
            /* ll tem=n;
            ll rem1=tem%10;
            tem=tem/10;
            if(rem1==1||rem1==2)
            {
               ll rem2=tem%10;
               tem=tem/10;
               if(rem2%2==0)
                    cout<<"YES\n";
               else
                cout<<"NO\n";
            }
            else
                cout<<"NO\n";
            ll sum=2021;
            if(n%2==0)
            {
                ll x=2021;
               for(ll i=1;i<=n/2;i++)
               {
                   sum+=x;
                   if(sum>=n)
                    break;
               }
               if(sum==n)
                cout<<"YES\n";
               else
                cout<<"NO\n";
            }
            else
            {
                ll x=2020;
               for(ll i=1;i<=n/2;i++)
               {
                   sum+=x;
                   if(sum>=n)
                    break;
               }
               if(sum==n)
                cout<<"YES\n";
               else
                cout<<"NO\n";
            }
        }*/
    }
}
