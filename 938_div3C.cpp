#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+2];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          sum+=a[i];
        }
           if(sum<=k)
           {
               cout<<n<<endl;
               continue;
           }
        ll f1=k/2;ll f2=k/2;
        if(k%2!=0)
            f1+=1;
        ll c1=0,c2=0,s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            f1-=a[i];
            if(f1<=0)
            {
                if(f1==0)
                    c1++;
               break;
            }
            c1++;
        }
        for(int i=n-1;i>=0;i--)
        {
            f2-=a[i];
            if(f2<=0)
            {
               if(f2==0)
                    c2++;
               break;
            }
            c2++;
        }
        cout<<c1+c2<<endl;
    }
}
