// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
 
// int main() 
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
 
//     ll t;
//     cin >> t;
 
//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;
//         if (n == 1 || m == 1 || (n == 2 && m == 2))
//             cout << "NO\n";
//         else
//             cout << "YES\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
 
// int main() 
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(nullptr);
 

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         ll total = 0;
//         ll Fixed = 0;
//         for (ll i = 0; i < n; i++) 
//         {
//             ll a, b, c, d;
//             cin >> a >> b >> c >> d;
//             total += a + b;
//             ll zeros = 0;
//             if (b <= d) 
//             {
//                 zeros = min(a, c);
//             }
//             ll ones = min(b, d);
//             Fixed += zeros + ones;
//         }
//         cout << total - Fixed << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<vector<int>> dist(n);
        for (int i = 0; i < n; i++) {
            dist[i] = vector<int>(adj[i].size(), -1);
        }

        queue<pair<int, int>> q;
        if (!adj[0].empty()) {
            dist[0][0] = 0;
            q.push({0, 0});
        }

        while (!q.empty()) {
            int u = q.front().first;
            int r = q.front().second;
            q.pop();
            int time_val = dist[u][r];
            int deg_u = adj[u].size();

            int new_r = (r + 1) % deg_u;
            if (dist[u][new_r] == -1) {
                dist[u][new_r] = time_val + 1;
                q.push({u, new_r});
            }

            int v = adj[u][r];
            int deg_v = adj[v].size();
            int new_r_v = (time_val + 1) % deg_v;
            if (dist[v][new_r_v] == -1) {
                dist[v][new_r_v] = time_val + 1;
                q.push({v, new_r_v});
            }
        }

        int maxT = 0;
        for (int u = 0; u < n; u++) {
            for (int r = 0; r < adj[u].size(); r++) {
                if (dist[u][r] != -1) {
                    maxT = max(maxT, dist[u][r]);
                }
            }
        }

        vector<vector<pair<int, int>>> buckets(maxT + 1);
        for (int u = 0; u < n; u++) {
            for (int r = 0; r < adj[u].size(); r++) {
                if (dist[u][r] != -1) {
                    buckets[dist[u][r]].push_back({u, r});
                }
            }
        }

        vector<vector<int>> wait(n);
        for (int i = 0; i < n; i++) {
            wait[i] = vector<int>(adj[i].size(), INF);
        }

        if (maxT >= 0) {
            for (auto &state : buckets[0]) {
                int u = state.first;
                int r = state.second;
                wait[u][r] = 0;
            }
        }

        vector<int> cand(n, INF);
        vector<int> to_clear;

        for (int T_val = 1; T_val <= maxT; T_val++) {
            to_clear.clear();
            for (auto &state : buckets[T_val - 1]) {
                int v = state.first;
                int rv = state.second;
                if (wait[v][rv] == INF) continue;
                int u = adj[v][rv];
                if (wait[v][rv] < cand[u]) {
                    if (cand[u] == INF) {
                        to_clear.push_back(u);
                    }
                    cand[u] = wait[v][rv];
                }
            }

            for (auto &state : buckets[T_val]) {
                int u = state.first;
                int r = state.second;
                int deg_u = adj[u].size();
                int r_prev = (r - 1 + deg_u) % deg_u;
                int candidate1 = INF;
                if (dist[u][r_prev] == T_val - 1) {
                    if (wait[u][r_prev] != INF) {
                        candidate1 = wait[u][r_prev] + 1;
                    }
                }
                int candidate2 = cand[u];
                wait[u][r] = min(candidate1, candidate2);
            }

            for (int u : to_clear) {
                cand[u] = INF;
            }
        }

        int total_time = INF;
        for (int r = 0; r < adj[n - 1].size(); r++) {
            if (dist[n - 1][r] != -1) {
                total_time = min(total_time, dist[n - 1][r]);
            }
        }
        int min_wait = INF;
        for (int r = 0; r < adj[n - 1].size(); r++) {
            if (dist[n - 1][r] == total_time) {
                min_wait = min(min_wait, wait[n - 1][r]);
            }
        }

        if (total_time == INF) {
            cout << "-1 -1\n";
        } else {
            cout << total_time << " " << min_wait << "\n";
        }
    }
    return 0;
}