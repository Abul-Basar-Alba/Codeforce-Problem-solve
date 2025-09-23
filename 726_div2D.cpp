#include<bits/stdc++.h>
#define ll long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2!=0)
            cout<<"Bob\n";
        else
        {
            ll p=sqrt(n);
          if(p*p==n)
          {
              cout<<"Alice\n";
              continue;
          }
          ll x=0,f=0;
            for(int i=1;i<=30;i++)
            {
                x=pow(2,i);
                if(x==n)
                {
                    f=1;
                    break;
                }
                if(x>n)
                    break;
            }
            if(f==1)
              cout<<"Bob\n";
            else
              cout<<"Alice\n";
        }

    }
}
