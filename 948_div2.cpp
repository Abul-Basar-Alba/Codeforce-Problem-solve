//#include<bits/stdc++.h>
//#define ll long long int
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    //cout<<"safety"<<endl;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//
//        if (m <= n && (n - m) % 2 == 0)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//
//    return 0;
//}
//


//#include<bits/stdc++.h>
//#define ll long long int
//using namespace std;
//
//void solve()
//{
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll x;
//        cin >> x;
//        vector<ll> result;
//
//        while (x > 0)
//        {
//            if (x & 1)
//            {
//                if (x & 2)
//                {
//                    result.push_back(-1);
//                    x = (x + 1) >> 1;
//                }
//               else
//                {
//                    result.push_back(1);
//                    x >>= 1;
//                }
//            }
//           else
//            {
//                result.push_back(0);
//                x >>= 1;
//            }
//        }
//
//        cout << result.size() << endl;
//        for (int val : result)
//        {
//            cout << val << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    solve();
//    return 0;
//}
//
//


#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <numeric> // for gcd

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        unordered_set<long long> elementsSet;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            elementsSet.insert(a[i]);
        }

        // Find the maximum special subsequence length
        int maxSpecialSubseqLength = 0;
        for (int i = 0; i < n; ++i) {
            long long currentLCM = a[i];
            for (int j = i; j < n; ++j) {
                currentLCM = (currentLCM * a[j]) / __gcd(currentLCM, a[j]);
                if (currentLCM > 1e9) break;
                if (elementsSet.find(currentLCM) == elementsSet.end()) {
                    maxSpecialSubseqLength = max(maxSpecialSubseqLength, j - i + 1);
                } else {
                    break;
                }
            }
        }

        cout << maxSpecialSubseqLength << '\n';
    }

    return 0;
}
