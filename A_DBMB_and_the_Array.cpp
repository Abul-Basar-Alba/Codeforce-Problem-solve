#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s,x;
        cin>>n>>s>>x;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        if(sum==s)
        {
            cout<<"YES\n"; 
        }
        else if(sum>s)
        {
            cout<<"NO\n";
        }
        else
        {
            ll diff=s-sum;
            if(diff%x==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}