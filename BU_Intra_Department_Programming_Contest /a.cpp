#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> adj(n + 1);
    for(ll i = 0; i < m; i++) 
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll start, end;
    cin >> start >> end;

    vector<bool> vis(n + 1, false);
    vector<ll> parent(n + 1, -1);

    queue<ll> q;
    q.push(start);
    vis[start] = true;

    while(!q.empty()) 
    {
        ll node = q.front();
        q.pop();

        for(ll nei : adj[node]) 
        {
            if(!vis[nei] && nei % 2 == 0)  
            {  
                vis[nei] = true;
                parent[nei] = node;
                q.push(nei);
            }
        }
    }

    if(!vis[end]) 
    {
        cout << "NO\n";
        return 0;
    }

    vector<ll> path;
    for(ll v = end; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());

    cout << "YES\n";
    for(ll x : path) cout << x << " ";
    cout << "\n";

    return 0;
}


