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
        ll a[n];
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        ll cn=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
               cn++;
            }

        }
        if(n==1||n==2)
            cout<<n<<endl;
        else if(s.size()>2)
            cout<<n<<endl;
        else if(s.size()<=2)
            cout<<(n/2+1)<<endl;
    }
}
