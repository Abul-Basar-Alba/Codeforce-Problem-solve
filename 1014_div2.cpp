// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         ll mx = *max_element(a.begin(), a.end());
//         ll mn = *min_element(a.begin(), a.end());
//         cout << (mx - mn) << "\n";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }
//         ll mx = *max_element(a.begin(), a.end());
//         ll mn = *min_element(a.begin(), a.end());
//         ll ans=0;
//         for(int i=0;i<n;i++)
//         {
//             ll x=__gcd(mn+a[i],mx+a[i]);
//             ans=max(x,ans);
//         }
       
//         cout << ans << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        long long sum0 = 0, sum1 = 0;
        // 1-based indexing mentally; here i=0..n-1
        for(int i = 0; i < n; i++){
            if ((i & 1) == 0) {
                // i+1 is odd
                if (a[i] == '1') sum0++;
                if (b[i] == '1') sum1++;
            } else {
                // i+1 is even
                if (b[i] == '1') sum0++;
                if (a[i] == '1') sum1++;
            }
        }

        // floor(n/2) == n/2,  ceil(n/2) == (n+1)/2
        if (sum0 <= n/2 && sum1 <= (n + 1)/2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
