#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) 
    {
        int n; cin >> n;
        cout << 2 * n << '\n';
        for (int i = 1; i <= n; ++i)
         {
            int l1 = 1;
            int r1 = n - i + 1;
            cout << i << ' ' << l1 << ' ' << r1 << '\n';

            int l2 = n - i + 2;
            if (l2 > n) l2 = n; 
            cout << i << ' ' << l2 << ' ' << n << '\n';
        }
    }
    return 0;
}
