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
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //reverse(a,a+n);
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
            //cout<<i<<' ';
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            //v.push_back(i);
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
}
