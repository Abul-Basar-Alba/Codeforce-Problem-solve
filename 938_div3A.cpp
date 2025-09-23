/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
    ll ans=(n/2)*b;
    if(n%2!=0)
        ans+=a;
    ll mn=min(a*n,ans);
    cout<<mn<<endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> ribbon(n);
        for (int i = 0; i < n; ++i) {
            cin >> ribbon[i];
        }

        vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));
        dp[0][0] = true;

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= k; ++j) {
                for (int c = 1; c <= m; ++c) {
                    if (i >= j + 1 && ribbon[i - j - 1] != c) {
                        dp[i][j] |= dp[i - j - 1][j];
                    }
                }
            }
        }

        if (dp[n][k]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

