#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

    
        int alt = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) alt++;
        }

        int ans = n + max(1, alt - 2);
        cout << ans << "\n";
    }

    return 0;
}
