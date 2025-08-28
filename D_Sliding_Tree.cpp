#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> graph(n+1);
        vector<int> deg(n+1, 0);
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        
        bool is_path = true;
        for (int i = 1; i <= n; i++) {
            if (deg[i] > 2) {
                is_path = false;
                break;
            }
        }
        if (is_path) 
        {
            cout << -1 << endl;
            continue;
        }
        
        int b = -1, c = -1, a = -1;
        for (int i = 1; i <= n; i++) {
            if (deg[i] == 1) {
                int j = graph[i][0];
                if (deg[j] >= 3) {
                    b = j;
                    c = i;
                    break;
                }
            }
        }
        
        if (b == -1) {
            for (int i = 1; i <= n; i++) {
                if (deg[i] >= 3) {
                    b = i;
                    break;
                }
            }
            c = graph[b][0];
            for (int neighbor : graph[b]) {
                if (deg[neighbor] < deg[c]) {
                    c = neighbor;
                }
            }
            for (int neighbor : graph[b]) {
                if (neighbor != c) {
                    a = neighbor;
                    break;
                }
            }
            cout << a << " " << b << " " << c << endl;
        } else {
            for (int neighbor : graph[b]) {
                if (neighbor != c) {
                    a = neighbor;
                    break;
                }
            }
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}