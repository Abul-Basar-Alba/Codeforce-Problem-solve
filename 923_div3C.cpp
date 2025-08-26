/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;

        cout<<b<<' ';
        cout<<c<<' ';
        cout<<c<<' ';
        cout<<endl;
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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n+2],b[m+2];
        set<ll>s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            s2.insert(b[i]);
        }
        ll c1=0,c2=0;
        ll ch=k/2;
        set<ll>s;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]<=k)
            {
              c1++;
              s.insert(s1[i]);
            }
        }
        foe(int i=0;i<s2.size();i++)
        {
            if(s2[i]<=k)
            {
             c2++;
             s.insert(s2[i]);
            }
        }
        if(c1<ch||c2<ch)
        {
            cout<<"NO\n";
            continue;
        }
        if(s.size()>=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n+2],b[m+2];
        set<ll>s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            s2.insert(b[i]);
        }
        ll c1=0,c2=0;
        ll ch=k/2;
        set<ll>s;
        for(auto it = s1.begin(); it != s1.end(); ++it)
        {
            if(*it <= k)
            {
                c1++;
                s.insert(*it);
            }
        }
        for(auto it = s2.begin(); it != s2.end(); ++it)
        {
            if(*it <= k)
            {
                c2++;
                s.insert(*it);
            }
        }
                if(c1 < ch || c2 < ch)
        {
            cout<<"NO\n";
            continue;
        }
        if(s.size() >= k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


