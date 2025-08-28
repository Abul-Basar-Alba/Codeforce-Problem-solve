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
        ll a[n+3];
        ll b[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int l=0,r=n-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
               continue;
            }
            l=i;
            break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==b[i])
            {
                continue;
            }
            r=i;
            break;
        }
        while(l-1>=0&&b[l-1]<=b[l])l--;
        while(r+1<n&&b[r+1]>=b[r])r++;
        vector<pair<int,int>>v;
        for(int i=l;i<r;i++)
        {
            if(b[i+1]<b[i])
            {
                v.push_back({l,i});
                l=i+1;
            }
        }
        v.push_back({l,r});
        l=0,r=0;
        int mx=0;
        for(auto i:v)
        {
            if(i.second-i.first+1>mx)
            {
                mx=i.second-i.first+1;
                l=i.first;
                r=i.second;
            }
        }
        cout<<l+1<<' '<<r+1<<endl;
    }
}
