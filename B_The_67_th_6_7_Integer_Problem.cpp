#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    vector<ll>v(7);
    ll mx=INT_MIN;
    ll sum=0;
    for(ll i=0;i<7;i++)
    {
        cin>>v[i];
        mx=max(v[i],mx);
    }
    ll f=0;
    for(ll i=0;i<7;i++)
    {
        if(v[i]==mx&&f==0)
        {
            f=1;
             continue;
        }
        sum+=v[i];
    }
    cout<<mx-sum<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}