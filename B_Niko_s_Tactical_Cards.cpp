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
    vector<ll>a(n),b(n);
    ll k=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll mx = 0, mn = 0;

    for(int i = 0; i < n; i++) 
    {

        ll x1 = mx - a[i];  
        ll y1 = mn - a[i]; 

        ll x2 = b[i] - mn; 
        ll y2 = b[i] - mx;

        mx = max(x1, x2);
        mn = min(y1, y2);
    }

    cout << max(mx, mn) << "\n";

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