#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void Basar() 
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) 
    cin >> a[i];

    sort(a.begin(), a.end()); 

    bool ok = true;
    for (int i = 1; i + 1 < n; i += 2) 
    {
        if (a[i] != a[i + 1]) 
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) 
    Basar();
    return 0;
}
