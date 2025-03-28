// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
 
//     ll t;
//     cin >> t;
 
//     while (t--)
//     {
//       ll n;
//         cin>>n;
//         ll x,y;
//         cin>>x>>y;
//         ll mn=min(x,y);
//         cout<<(n+mn-1)/mn<<endl;
//     }
//   }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0, max_elem = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        max_elem = max(max_elem, a[i]);
    }

    cout << sum - 2 * (sum - max_elem) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
