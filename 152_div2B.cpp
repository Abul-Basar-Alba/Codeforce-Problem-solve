#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+2];
        vector<ll>v;
        for(int i=0;i<n;i++)
            cin>>a[i];
        while(1)
        {
            ll mx=INT_MIN;
            ll c=0;
            for(int i=0;i<n;i++)
            {
                if(mx<a[i])
                {
                    mx=a[i];
                    c=i;
                }
            }
            a[c]-=k;
            for(int i=0;i<n;i++)
            {
                if(a[i]<=0)
                    v.push_back(i);
            }
            if(v.size()==n)
                break;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]+1<<' ';
        }
        cout<<endl;
    }
}
