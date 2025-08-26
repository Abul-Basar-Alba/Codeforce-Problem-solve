#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(void) 
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> v(n);

    for (auto &it : v) 
    {
        cin >> it;
        mp[it]++;
    }

    ll fl = 1;
    for (auto it : mp) 
    {
        if (it.second & 1) 
        {
            fl = 0;
            break;
        }
    }

    if (fl) 
    {
        cout << "Yes\n";
        return;
    }

    for (int i = 1; i <= 2 * n; i++) 
    {
        if (mp[i] == 0) 
        continue;

        if (mp[i] < 2) 
        {
            cout << "No\n";
            return;
        }

        mp[i] -= 2;
        mp[i + 1] += mp[i];
    }

    cout << "Yes\n";
}

int main() 
{
    ll t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}