//B

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n, k;
//        cin >> n >> k;
//        char g[n][n];
//        for (int i = 0; i < n; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                cin >> g[i][j];
//            }
//        }
//
//        ll m = n / k;
//
//        char ans[m][m];
//
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < m; ++j)
//            {
//                ans[i][j] = g[i * k][j * k];
//            }
//        }
//
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < m; ++j)
//            {
//                cout << ans[i][j];
//            }
//            cout << '\n';
//        }
//    }
//
//    return 0;
//}

//D

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//     ll n,x;
//     cin>>n>>x;
//     ll res=0;
//     for(int a=1;a<n;a++)
//     {
//         for(int b=1;a*b<n;b++)
//         {
//             res+=max(0LL,min((n-a*b)/(a+b),(x-a-b)));
//         }
//     }
//     cout<<res<<endl;
//    }
//    return 0;
//}


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//      ll n;
//      cin>>n;
//      ll res=0;
//      res+=(n/4);
//      ll rem=n%4;
//      res+=(rem/2);
//      cout<<res<<endl;
//    }
//    return 0;
//}

//C:sort

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n, q;
//        cin >> n >> q;
//
//        string a, b;
//        cin >> a >> b;
//
//        while (q--)
//        {
//            ll l, r;
//            cin >> l >> r;
//            l--; r--;
//
//            vector<ll> freq_a(26, 0), freq_b(26, 0);
//
//            for (int i = l; i <= r; ++i)
//            {
//                freq_a[a[i] - 'a']++;
//                freq_b[b[i] - 'a']++;
//            }
//
//            ll res = 0;
//            for (int i = 0; i < 26; ++i)
//            {
//                if (freq_a[i] < freq_b[i])
//                {
//                    res += (freq_b[i] - freq_a[i]);
//                }
//            }
//
//            cout << res << '\n';
//        }
//    }
//
//    return 0;
//}


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        // Create prefix frequency arrays
        vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0));
        vector<vector<int>> prefix_b(n + 1, vector<int>(26, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                prefix_a[i + 1][j] = prefix_a[i][j];
                prefix_b[i + 1][j] = prefix_b[i][j];
            }
            prefix_a[i + 1][a[i] - 'a']++;
            prefix_b[i + 1][b[i] - 'a']++;
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--; // Convert to 0-based index

            vector<int> freq_a(26, 0), freq_b(26, 0);

            // Calculate the frequency of characters in the given range [l, r] using prefix arrays
            for (int j = 0; j < 26; ++j) {
                freq_a[j] = prefix_a[r + 1][j] - prefix_a[l][j];
                freq_b[j] = prefix_b[r + 1][j] - prefix_b[l][j];
            }

            int operations = 0;
            for (int j = 0; j < 26; ++j) {
                if (freq_a[j] < freq_b[j]) {
                    operations += (freq_b[j] - freq_a[j]);
                }
            }

            cout << operations << '\n';
        }
    }

    return 0;
}

