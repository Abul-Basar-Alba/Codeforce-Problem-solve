// #include <bits/stdc++.h>
// using namespace std;

// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> b(n);
//         for(ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }

//         bool found = false;
//         while(!b.empty())
//         {
//             ll m = b.size();
//             vector<ll> c = b;
//             sort(c.begin(), c.end());

//             ll del = -1;
//             for(ll i = 0; i < m; i++)
//             {
//                 if(b[i] == c[i])
//                 {
//                     del = i;
//                     break;
//                 }
//             }

//             if(del == -1)
//             {
                
//                 cout << "YES\n";
//                 cout << m << "\n";
//                 for(ll x : b) 
//                 cout << x << " ";
//                 cout << "\n";
//                 found = true;
//                 break;
//             }

//             if(m == 1)
//             {
//                 break;
//             }

//             b.erase(b.begin() + del);
//         }

//         if(!found)
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         vector<ll> pre_min(n);
//         vector<ll> pre_sum(n);
//         if (n > 0) {
//             pre_min[0] = a[0];
//             pre_sum[0] = a[0];
//             for (int i = 1; i < n; i++) {
//                 pre_min[i] = min(pre_min[i-1], a[i]);
//                 pre_sum[i] = pre_sum[i-1] + pre_min[i];
//             }
//         }

//         ll ans = (n > 0) ? pre_sum[n-1] : 0;

//         for (int i = 0; i < n - 1; i++) {
//             ll new_val = a[i] + a[i+1];
//             ll new_min_i;
//             if (i == 0) {
//                 new_min_i = new_val;
//             } else {
//                 new_min_i = min(pre_min[i-1], new_val);
//             }
//             ll total = (i > 0 ? pre_sum[i-1] : 0) + new_min_i;
//             if (total < ans) {
//                 ans = total;
//             }
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Function to compute GCD using Euclidean algorithm
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    // Optimize I/O
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n; // Length of array
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i]; // Input array b
        }

        ll result = 1; // Initialize x
        // Check each consecutive pair
        for (int i = 0; i < n - 1; i++) {
            if (b[i + 1] % b[i] != 0) { // If b[i] does not divide b[i+1]
                ll d = gcd(b[i], b[i + 1]);
                ll m = b[i] / d;
                result = lcm(result, m); // Update x as LCM
            }
        }
        cout << result << "\n"; // Output x for this test case
    }
    return 0;
}