#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin>>n;
    vector<vector<ll>>v(2,vector<ll>(n));
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }
    ll ans=0;
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        ans+=max(v[0][i],v[1][i]);
        mx=max(mx,min(v[0][i],v[1][i]));
    }
    cout<<ans+mx<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}