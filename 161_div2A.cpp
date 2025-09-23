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
        ll cn=0;
        string a,b,c;
        cin>>a>>b>>c;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i]&&b[i]!=c[i])
            {
                cn=1;
                break;
            }
        }
        if(cn==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}*/
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
        string s;
        cin>>s;
        ll cs=0,cf=0;

        for(int i=0;i<n;i++)
        {
          if(s[i]=='1')
                cs++;
        }
        string f;
        cin>>f;
        for(int i=0;i<n;i++)
        {
            if(f[i]=='1')
                cf++;
        }
        ll ans=0;
        if(cs>cf)
        {
            ans=cs-cf;
        }
        for(int i=0;i<n;i++)
        {
            if(f[i]=='1'&&s[i]=='0')
                ans++;
        }
        cout<<ans<<endl;
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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        ll s[n+2];
        ll c=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
               c=s[i];
            else
                c=s[i]-s[i-1];
            ll mn=min((c*a),(b*a));
            f-=mn;
        }
        if(f>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

