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
//        ll n;
//        cin >> n;
//        vector<ll> v(n);
//        ll f0 = 0, f1 = 0, f2 = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            cin >> v[i];
//            if (v[i] % 3 == 0)
//                f0++;
//            else if (v[i] % 3 == 1)
//                f1++;
//            else if (v[i] % 3 == 2)
//                f2++;
//        }
//
//        ll res = n / 3;
//        ll ans = 0;
//
//        while (f0 != res || f1 != res || f2 != res)
//        {
//            if (f0 > res)
//            {
//                ans += f0 - res;
//                f1 += f0 - res;
//                f0 = res;
//            }
//            else if (f1 > res)
//            {
//                ans += f1 - res;
//                f2 += f1 - res;
//                f1 = res;
//            }
//            else if (f2 > res)
//            {
//                ans += f2 - res;
//                f0 += f2 - res;
//                f2 = res;
//            }
//        }
//
//        cout << ans << endl;
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
//        ll a, b, c;
//        cin >> a >> b >> c;
//
//        ll mx= 0;
//
//
//        for (int i = 0; i <= 5;i++)
//        {
//            for (int j = 0; j <= 5 - i;j++)
//            {
//                ll k = 5 - i - j;
//
//                ll na = a + i;
//                ll nb = b + j;
//                ll nc = c + k;
//
//                mx = max(mx, na * nb * nc);
//            }
//        }
//
//        cout << mx << endl;
//    }
//
//    return 0;
//}

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//const int mod= 1000000007;
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
//        vector<ll> a(k);
//        for (int i = 0; i < k; i++)
//            cin >> a[i];
//
//        sort(a.begin(), a.end());
//        ll res= 0;
//        ll sum = 0;
//        for (int i = 0; i < k- 1; i++)
//        {
//             res+=a[i];
//             sum += (a[i] - 1);
//
//        }
//        cout <<sum + res<< endl;
//    }
//    return 0;
//}


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//const int mod= 1000000007;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n, m, k;
//        cin >> n >> m >> k;
//
//        vector<ll>v;
//
//        for (int i = n; i >=k; i--)
//        {
//           v.push_back(i);
//        }
//        for (int i = m + 1; i < k; i++)
//        {
//            v.push_back(i);
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            v.push_back(i);
//        }
//
//        for (ll c :v)
//        {
//            cout << c << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<pair<int, vector<pair<int, int>>>> results;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<pair<int, int>> bad_tests;

        for (int a = 1; a <= 10000; ++a) {
            for (int b = 1; b <= min(10000, n * a); ++b) {
                string s;
                for (int j = 0; j < a; ++j) {
                    s += to_string(n);
                }

                if (b <= s.size()) {
                    string modified_s = s.substr(0, s.size() - b);
                    int actual_result = stoi(modified_s);
                    int expected_result = n * a - b;

                    if (actual_result == expected_result) {
                        bad_tests.push_back({a, b});
                    }
                }
            }
        }

        results.push_back({n, bad_tests});
    }

    for (auto& result : results) {
        cout << result.second.size() << endl;
        for (auto& pair : result.second) {
            cout << pair.first << " " << pair.second << endl;
        }
    }

    return 0;
}
