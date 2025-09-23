#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,m;
        cin>>a>>b>>m;
        if(a==1&&b==1)
        {
                cout<<2*m+2<<endl;
                continue;
        }
        ll ans=0;
        if(a<m&&b<m)
        {
           ans=m/a;
           ans+=(m/b);
           ans+=2;
           cout<<ans<<endl;
        }
        else
        {
        ll ca=0,cb=0,cna=1,cnb=1;

        while(1)
        {
           ca+=a;
           if(ca>m)
            break;
            cna++;
        }

        while(1)
        {
           cb+=b;
           if(cb>m)
            break;
            cnb++;
        }
       cout<<(cnb+cna)<<endl;
        }
    }
}
