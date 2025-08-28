/*#include<bits/stdc++.h>
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
        //vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll fs=a[0],f=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=fs)
                f=1;
        }
        if(f==0)
        {
            cout<<f<<endl;
            continue;
        }
        ll fl=0,c=0;
        for(int i=0;i<=n/2;i++)
        {
           if(a[i]==a[n-1-i])
               fl++;
           else
            {
                if(a[i]==a[i-1])
                c=1;
                break;
            }
        }
        fl*=2;
        fl+=c;
        ll ft=0,ls=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                ft++;
            else
            break;

        }
        if(ft!=0)
            ft+=1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==a[i-1])
                ls++;
            else
            break;
        }
        if(ls!=0)
            ls+=1;
        ll mx=max(fl,max(ft,ls));
        if(mx==0)
           cout<<n-1<<endl;
        else
        cout<<abs(n-mx)<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mn=INT_MAX,mx=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
        }
        if(mx==mn)
        {
            cout<<0<<endl;
            continue;
        }
        ll fs=1,ls=1;
        if(v[0]==v[n-1])
        {
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
                fs++;
            else
                break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==v[i-1])
                ls++;
            else
                break;
        }
        ll ans=n-(fs+ls);
        cout<<ans<<endl;
        }
        else
        {
           for(int i=0;i<n-1;i++)
           {
            if(v[i]==v[i+1])
                fs++;
            else
                break;
           }
        for(int i=n-1;i>=0;i--)
          {
            if(v[i]==v[i-1])
                ls++;
            else
                break;
          }
          ll m=max(ls,fs);
          cout<<n-m<<endl;
        }
    }
}
