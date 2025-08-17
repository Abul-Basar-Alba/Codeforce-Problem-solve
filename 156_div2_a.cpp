#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,z;
        cin>>n;
        if(n<7)
            cout<<"NO\n";
        else
        {
            ll tem=n;
           x=tem/3;
           if(x%3==0)
            x+=1;
           y=n-x-1;
           for(int i=1;i<=(n-x);i++)
           {
            if(y%3==0||y==x)
           {
              y-=1;
           }
           else
            break;
           }
           z=n-x-y;
           if(z%3!=0&&x!=z&&y!=z)
            cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
           else
            cout<<"NO\n";
        }
    }
}
