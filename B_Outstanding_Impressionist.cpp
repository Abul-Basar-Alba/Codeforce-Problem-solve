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
    vector<pair<ll,ll>> p(n);
    vector<ll> pre(2*n+2,0), mp(2*n+2,0);

    for(int i=0;i<n;i++){
        ll l,r;
        cin >> l >> r;
        p[i]={l,r};
        if(l==r) 
        mp[l]++;  
    }

    for(int i=1;i<=2*n;i++)
    {
        pre[i] = pre[i-1] + (mp[i] > 0);
    }

    for(int i=0;i<n;i++)
    {
        ll l = p[i].first, r = p[i].second;
        if(l==r)
        {
            cout << (mp[l] <= 1 ? 1 : 0);
        }
        else{
            ll len = r - l + 1;
            ll res = pre[r] - pre[l-1];
            cout << (res < len ? 1 : 0);
        }
    }
    cout << "\n";


    
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