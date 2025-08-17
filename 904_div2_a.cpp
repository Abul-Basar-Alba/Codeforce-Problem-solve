#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        if(k<10&&x<=k)
            cout<<k<<endl;
        else
        {
            ll rem,tem,sum=0;
            tem=x;
            while(tem!=0)
            {
                rem=tem%10;
                sum+=rem;
                tem=tem/10;
            }
            if(sum%k==0)
                cout<<x<<endl;
            else
            {
                ll rem1,tem1;
                for(ll i=0;;i++)
                {
                    tem1=x;
                    ll sum1=0;
                    while(tem1!=0)
                  {
                rem1=tem1%10;
                sum1+=rem1;
                tem1=tem1/10;
                  }
                  if(sum1%k==0)
                    break;
                  else
                    x++;
                }
                cout<<x<<endl;
            }
        }
    }
}
