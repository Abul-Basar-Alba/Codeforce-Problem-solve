
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<"YES\n";
            continue;
        }
        vector<ll>b=a;
        sort(b.begin(),b.end());
        map<ll,ll>pos;
        for(int i=0;i<n;i++)
        {
            pos[b[i]]=i;
        }
        ll cnt=1;
        
        for(int i=1;i<n;i++)
        {
           if(pos[a[i]]!=pos[a[i-1]]+1)
           cnt++;
        }
        if(cnt<=k)
        cout<<"YES\n";
        else
         cout<<"NO\n";

    }
}