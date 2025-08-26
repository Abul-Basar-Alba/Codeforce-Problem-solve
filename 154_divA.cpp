
/*#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        for(int i=0;i<n;i++)
            cout<<"GB";
    }
    else if(n>m)
    {
        int x=n-m;
        for(int i=0;i<x;i++)
            cout<<"B";
        for(int i=0;i<m;i++)
            cout<<"GB";
    }
    else if(m<n)
    {
        int x=m-n;
        for(int i=0;i<x;i++)
            cout<<"G";
        for(int i=0;i<n;i++)
        {
            cout<<"BG";
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}*/


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
//        string s;
//        cin >> s;
//        bool found = false;
//        for (int i = 0; i < s.size() - 1 && !found; i++)
//        {
//            for (int j = i + 1; j < s.size(); j++)
//            {
//                ll res = (s[i] - '0') * 10 + (s[j] - '0');
//                bool ok = true;
//
//                if(res % 2 == 0)
//                {
//                    ok = false;
//                }
//                else
//                {
//                    for(int k = 3; k <= sqrt(res); k += 2)
//                    {
//                        if(res % k == 0)
//                        {
//                            ok = false;
//                            break;
//                        }
//                    }
//                }
//
//                if(ok)
//                {
//                    cout << res << endl;
//                    found = true;
//                    break;
//                }
//            }
//        }
//        if (!found)
//        {
//            cout << -1 << endl;
//        }
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n;
//        cin >> n;
//        for (int i = 1; i <= n; ++i)
//        {
//            cout << i * i << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

void op(ll &ch, ll x) {
    ch = (ch + x) % 3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll a[n][m];
        ll b[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                b[i][j] = c - '0';
            }
        }

        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                while (a[i][j] != b[i][j]) {
                    op(a[i][j], 1);
                    op(a[i + 1][j], 2);
                    op(a[i + 1][j + 1], 1);
                    op(a[i][j + 1], 2);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] != b[i][j]) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
