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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) 
    cin >> a[i];

    set<ll> st(a.begin(), a.end());

    if (st.size() < n) 
        cout << "YES\n";
    else 
        cout << "NO\n";  
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
