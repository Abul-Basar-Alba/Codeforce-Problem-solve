// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int ask(ll x, const vector<ll>& s) 
// {

//     cout << "? " << x << " " << s.size();
//     for (int v : s) 
//     cout << " " << v;
//     cout << "\n";
//     cout.flush();

//     int ans;
//     if (!(cin >> ans)) 
//     exit(0); 
//     if (ans == -1) 
//     exit(0);    
//     return 
//     ans;
// }

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     if (!(cin >> t)) 
//     return 0;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;


//         vector<ll> dp(n+1);
//         vector<ll> all(n);
//         for (int i = 0; i < n; ++i) 
//         all[i] = i+1;
//         for (int i = 1; i <= n; ++i) 
//         {
//             dp[i] = ask(i, all); 
//         }


//         ll start = 1;
//         for (int i = 2; i <= n; ++i)
//             if (dp[i] > dp[start]) start = i;


//         vector<ll> path;
//         vector<char> used(n+1, false);
//         ll cur = start;
//         path.push_back(cur);
//         used[cur] = true;

//         while (dp[cur] > 1) 
//         {
//             ll need = dp[cur] - 1;
//             ll found = -1;
//             for (int v = 1; v <= n; ++v) 
//             {
//                 if (!used[v] && dp[v] == need) 
//                 {

//                     vector<ll> s = {cur, v};
//                     ll ans = ask(cur, s);
//                     if (ans == 2) 
//                     { 
//                         found = v;
//                         break;
//                     }
//                 }
//             }
//             if (found == -1) 
//             {

//                 break;
//             }
//             cur = found;
//             used[cur] = true;
//             path.push_back(cur);
//         }

    
//         cout << "! " << path.size();
//         for (int v : path) cout << " " << v;
//         cout << "\n";
//         cout.flush();

//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> d(n+1, 0);
        for (int i=1; i<=n; i++) {
            cout << "? " << i << " " << n;
            for (int j=1; j<=n; j++) {
                cout << " " << j;
            }
            cout << endl;
            cin >> d[i];
        }
        
        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 1);
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return d[a] > d[b];
        });
        
        vector<int> path;
        int current = indices[0];
        int current_d = d[current];
        path.push_back(current);
        
        while (current_d > 1) {
            vector<int> candidates;
            for (int i=1; i<=n; i++) {
                if (d[i] == current_d - 1) {
                    candidates.push_back(i);
                }
            }
            bool found = false;
            for (int candidate : candidates) {
                cout << "? " << current << " 2 " << current << " " << candidate << endl;
                int res;
                cin >> res;
                if (res == 2) {
                    path.push_back(candidate);
                    current = candidate;
                    current_d = d[current];
                    found = true;
                    break;
                }
            }
            if (!found) {
                break;
            }
        }
        
        cout << "! " << path.size();
        for (int node : path) {
            cout << " " << node;
        }
        cout << endl;
    }
    return 0;
}