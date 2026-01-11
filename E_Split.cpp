#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];
    
    map<ll, ll> cnt;
    for (ll x : a) 
    cnt[x]++;
    
    bool ok = true;
    map<ll, ll> need;
    for (ll i = 1; i <= n; i++) 
    {
        if (cnt[i] % k != 0) 
        {
            ok = false;
            break;
        }
        need[i] = cnt[i] / k;
    }
    if (!ok) 
    {
        cout << 0 << '\n';
        return;
    }

    map<ll, ll> freq;
    ll ans = 0;
    ll l = 0;
    for (ll r = 0; r < n; r++) 
    {
        freq[a[r]]++;
        while (freq[a[r]] > need[a[r]]) 
        {
            freq[a[l]]--;
            l++;
        }
        ans += (r - l + 1);
    }
    cout << ans << '\n';
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
