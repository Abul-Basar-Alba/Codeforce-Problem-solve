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
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll x=1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                x++;
            }
            b[i]=x;
            x++;
        }
        cout<<b[n-1]<<endl;
        /*ll n,e;
        cin>>n;
        vector<int>a;
        for(ll i=0;i<n;i++)
        {
            cin>>e;
            a.push_back(e);
        }
        vector<int>b;
        ll x=1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                x++;
            }
            b.push_back(x);

            x++;
        }
        cout<<b.back()<<endl;*/
    }
}
