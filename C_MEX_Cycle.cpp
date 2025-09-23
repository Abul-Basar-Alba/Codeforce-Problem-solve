// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) {
//         int n, x, y;
//         cin >> n >> x >> y;
//         x--; y--; 

//         vector<int> a(n);
//         for(int i = 0; i < n; i++) {
//             a[(x+i)%n] = i % 2;
//         }

//         if(n % 2 == 1 || (abs(x-y) % 2 == 0)) 
//         {
//             a[x] = 2;
//         }

//         for(int i = 0; i < n; i++) {
//             cout << a[i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    x--; y--; 

    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        v[(x + i) % n] = i % 2;
    }

    if (n % 2 == 1 || abs(x - y) % 2 == 0) {
        v[x] = 2;
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
