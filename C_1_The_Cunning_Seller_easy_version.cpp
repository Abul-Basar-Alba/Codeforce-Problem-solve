#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin >> n;

    map<ll,ll>coin;
    map<ll,ll> mp;

    for (int x = 0; x <= 20; x++) 
    {
        ll con=(pow(3, x+1) + x * pow(3,(x-1)));
        coin[x] = con;
    }

    ll ans = 0;
    for(int i=20;i>=0;i--)
    {
        ll sum=pow(3,i);
        if(sum<=n)
        {
            ll cnt=n/sum;
            mp[i]=cnt;
            n%=sum;
        }
    }
    for(int i=0;i<20;i++)
    {
        if(mp[i]>0)
        {
            ans+=coin[i]*mp[i];
        }
    }
    
    cout << ans << "\n";
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
