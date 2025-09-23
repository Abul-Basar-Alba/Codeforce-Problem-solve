#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++)
            cin >> s[i];
        ll ans = 0;
        for(int i = 0; i < n / 2; i++)
        {
            for(int j = 0; j < n / 2; j++)
            {
                char ch[4] = {s[i][j], s[j][n - i - 1], s[n - i - 1][n - j - 1], s[n - j - 1][i]};
                char mx = *max_element(ch, ch + 4);
                for(int k = 0; k < 4; k++)
                {
                    ans += (mx - ch[k]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
