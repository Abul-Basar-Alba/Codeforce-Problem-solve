#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<vector<ll>> g(n + 1); 

    for (int i = 1; i <= n; i++) 
    {
        ll a, b;
        cin >> a >> b;
        g[i].push_back(a);
        g[i].push_back(b);
    }

    vector<ll> ans;
    ans.push_back(1); 
    ll prev = 0, cur= 1;

    for (int i = 1; i < n; i++) 
    {
        ll u = g[cur][0], v = g[cur][1];
        ll nxt;
        if (u != prev && (g[u][0] == v || g[u][1] == v)) 
        {
            nxt = u;
        } 
        else 
        {
            nxt = v;
        }

        ans.push_back(nxt);
        prev = cur;
        cur = nxt;
    }

    for (int x : ans) 
    cout << x << " ";
    cout << "\n";

    return 0;
}
