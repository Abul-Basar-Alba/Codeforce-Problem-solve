//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//ll solve(ll x,ll y)
//{
//    ll z = x ^ y;
//    ll cn=0;
//    while ((z & 1) == 0)
//    {
//        z >>= 1;
//        cn++;
//    }
//    return 1 << cn;
//}
//
//int main()
//{
//    ll t;
//    cin >> t;
//    vector<ll>v;
//    while(t--)
//    {
//        ll x, y;
//        cin >> x >> y;
//        v.push_back(solve(x, y));
//    }
//    for (ll res:v)
//    {
//        cout << res << endl;
//    }
//    return 0;
//}


// A


//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        vector<ll>a(n);
//        for(int i=0;i<n;i++)
//            cin>>a[i];
//        vector<ll>v;
//        for(int i=0;i<n-1;i++)
//        {
//            ll mx=max(a[i],a[i+1]);
//            v.push_back(mx);
//        }
//        ll mn=*min_element(v.begin(),v.end());
//        cout<<mn-1<<endl;
//    }
//}

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin >> t;
//    ll res=0;
//    while(t--)
//    {
//        ll x, y;
//        cin >> x >> y;
//        ll z = x ^ y;
//        ll cn = 0;
//        while ((z & 1) == 0)
//        {
//            z >>= 1;
//            cn++;
//        }
//        res=1<<cn;
//        cout << res << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Number of outcomes

        vector<int> k(n);
        for (int i = 0; i < n; ++i) {
            cin >> k[i];  // Multipliers
        }

        // We need to find a set of bets such that for all i, k_i * x_i > sum(x_j)
        // A simple heuristic approach is to check if k_i > n for all i
        bool possible = false;
        for (int i = 0; i < n; ++i) {
            if (k[i] > n) {
                possible = true;
                break;
            }
        }

        if (!possible) {
            cout << -1 << endl;
            continue;
        }

        // Find suitable bets
        vector<int> x(n);
        int sum_x = 0;

        for (int i = 0; i < n; ++i) {
            x[i] = 1;  // Initially bet 1 coin on each outcome
            sum_x += x[i];
        }

        for (int i = 0; i < n; ++i) {
            if (k[i] * x[i] <= sum_x) {
                x[i] = sum_x + 1;  // Make sure k_i * x_i > sum_x
                break;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << x[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}

