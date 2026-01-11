#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n,s;
    cin >> n >> s;
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
        ll dx,dy,x,y;
        cin >> dx >> dy >> x >> y;
        if((dx==dy&&x==y)||(dx!=dy&&(x+y)==s)) 
        cnt++;
    }
    cout << cnt << "\n";
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