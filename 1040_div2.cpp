

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         ll total = 0;
//         ll zero = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             ll x;
//             cin >> x;
//             total += x;
//             if (x == 0) 
//             zero++;
//         }
//         total += zero;
//         cout << total << '\n';
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// bool aliceCanReach(const vector<int>& a, int s)
// {
//     int n = a.size();
    
//     vector<vector<char>> vis(n, vector<char>(s+1, 0));
//     queue<pair<int,int>> q;

//     if (a[0] > s) 
//     return false;
//     q.emplace(0, a[0]);
//     vis[0][a[0]] = 1;
//     while (!q.empty()) 
//     {
//         auto [pos, acc] = q.front(); 
//         q.pop();
//         if (pos == n-1 && acc == s) 
//             return true;
       
//         for (int d : { -1, +1 }) 
//         {
//             int np = pos + d;
//             if (np < 0 || np >= n) 
//             continue;
//             int ns = acc + a[np];
//             if (ns > s) 
//             continue;
//             if (!vis[np][ns]) 
//             {
//                 vis[np][ns] = 1;
//                 q.emplace(np, ns);
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T; 
//     cin >> T;
//     while (T--) 
//     {
//         int n, s;
//         cin >> n >> s;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         sort(a.begin(), a.end());
//         bool found = false;
//         do {
            
//             if (!aliceCanReach(a, s)) 
//             {
//                 for (int x : a) 
//                     cout << x << ' ';
//                 cout << "\n";
//                 found = true;
//                 break;
//             }
//         } while (next_permutation(a.begin(), a.end()));

//         if (!found) 
//         {
//             cout << -1 << "\n";
//         }
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, s;
//         cin >> n >> s;
//         vector<ll> a(n);
//         ll c0 = 0, c1 = 0, c2 = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             cin >> a[i];
//             if (a[i] == 0) 
//             c0++;
//             else if (a[i] == 1) 
//             c1++;
//             else if (a[i] == 2) 
//             c2++;
//         }

//         ll sum = c1 + 2 * c2;
//         ll x = s - sum;

//         if (x < 0) 
//         {
//             vector<ll> ans;
//             for (int i = 0; i < c0; i++) 
//             ans.push_back(0);
//             for (int i = 0; i < c1; i++) 
//             ans.push_back(1);
//             for (int i = 0; i < c2; i++) 
//             ans.push_back(2);
//             for (int i = 0; i < ans.size(); i++) 
//             {
//                 if (i > 0) 
//                 cout << " ";
//                 cout << ans[i];
//             }
//             cout << endl;
//         } 
//         else if (x == 0) 
//         {
//             cout << -1 << endl;
//         } 
//         else 
//         {
//             if (x == 1) 
//             {
//                 vector<ll> ans;
//                 for (int i = 0; i < c0; i++) 
//                 ans.push_back(0);
//                 ans.push_back(2);
//                 for (int i = 0; i < c1; i++) 
//                 ans.push_back(1);
//                 for (int i = 0; i < c2 - 1; i++) 
//                 ans.push_back(2);
//                 for (int i = 0; i < ans.size(); i++) 
//                 {
//                     if (i > 0) 
//                     cout << " ";
//                     cout << ans[i];
//                 }
//                 cout << endl;
//             } 
//             else 
//             {
//                 cout << -1 << endl;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<tuple<int, int, int>> edges;
        set<int> all_ints;
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            edges.push_back({a, b, i+1});
            all_ints.insert(a);
            all_ints.insert(b);
        }

        if (n == 0) {
            cout << 0 << endl;
            continue;
        }

        vector<int> V(all_ints.begin(), all_ints.end());
        sort(V.begin(), V.end());
        unordered_map<int, int> comp;
        for (int i = 0; i < V.size(); i++) {
            comp[V[i]] = i;
        }

        int max_x = V.back();
        vector<bool> mark(max_x + 1, false);

        vector<int> parent(V.size());
        vector<int> rank(V.size(), 0);
        for (int i = 0; i < V.size(); i++) {
            parent[i] = i;
        }

        sort(edges.begin(), edges.end(), [](const auto& a, const auto& b) {
            return get<1>(a) < get<1>(b);
        });

        vector<int> selected;

        function<int(int)> find = [&](int x) -> int {
            if (parent[x] != x) {
                parent[x] = find(parent[x]);
            }
            return parent[x];
        };

        auto union_nodes = [&](int x, int y) -> bool {
            x = find(x);
            y = find(y);
            if (x == y) 
                return false;
            if (rank[x] < rank[y])
                swap(x, y);
            parent[y] = x;
            if (rank[x] == rank[y])
                rank[x]++;
            return true;
        };

        for (const auto& edge : edges) {
            int a = get<0>(edge);
            int b = get<1>(edge);
            int idx = get<2>(edge);
            int l = a;
            int r = b - 1;
            if (r > max_x) 
                r = max_x;
            if (l > r) 
                continue;

            int gain = 0;
            for (int x = l; x <= r; x++) {
                if (!mark[x]) {
                    gain++;
                }
            }

            if (gain == 0) 
                continue;

            int u = comp[a];
            int v = comp[b];
            if (find(u) != find(v)) {
                selected.push_back(idx);
                for (int x = l; x <= r; x++) {
                    if (x <= max_x) {
                        mark[x] = true;
                    }
                }
                union_nodes(u, v);
            }
        }

        sort(selected.begin(), selected.end());
        cout << selected.size() << endl;
        if (!selected.empty()) {
            for (int i = 0; i < selected.size(); i++) {
                if (i > 0) 
                    cout << " ";
                cout << selected[i];
            }
            cout << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}