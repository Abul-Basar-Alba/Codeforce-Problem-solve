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
        ll a[n+2];
        ll o=0,e=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            else
                o++;
        }

        if(e>0&&o>0)
            cout<<2<<endl;
        else
        {
            ll d=2;

            while(1)
            {
                set<ll>s;
              for(int i=0;i<n;i++)
              {
                  s.insert(a[i]%d);
              }

              if(s.size()==2)
                {
                cout<<d<<endl;
                 break;
                }
                d*=2;
            }

        }
    }
}
