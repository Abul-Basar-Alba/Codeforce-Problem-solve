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
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll>v1(n*n),v2(n*n);
        ll mn=INT_MAX;
        for(int i=0;i<n*n;i++)
        {
            ll x;
            cin>>x;
            mn=min(mn,x);
            v1.push_back(x);
        }
        v2.push_back(mn);
        queue<ll>q;
        q.push(mn);
        for(int i=0;i<n-1;i++)
        {
            mn+=d;
            q.push(mn);
            v2.push_back(mn);
        }
        for(int i=0;i<n-1;i++)
        {
            ll s=q.size();
            while(s--)
            {
                ll f=q.front();
                q.pop();
                v2.push_back(f+c);
                q.push(f+c);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
            if(v1==v2)
              cout<<"YES\n";
            else
                cout<<"NO\n";
    }
}
