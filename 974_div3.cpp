// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--) 
//     {
//         ll n, k;
//         cin >> n >> k;
//         vector<ll> a(n);
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         ll tem = 0, ans = 0;
//         for(int i = 0; i < n; i++)
//         {
//             if(a[i] >= k)
//             {
//                 tem += a[i];
//             }
//             else if(a[i] == 0 && tem > 0)
//             {
//                 ans++;
//                 tem--; 
//             }
//         }
//         cout << ans << "\n";
//     }   
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n, k;
//         cin >> n >> k;
        
//         ll e = (n/2) - ((n-k)/2);

//         if ((k & 1) == (e & 1))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll &x : a) {
            cin >> x;
        }

        // যদি n <= 2, কখনোই n/2’র বেশি মানুষ অসন্তুষ্ট হতে পারে না
        if (n <= 2) {
            cout << -1 << "\n";
            continue;
        }

        sort(a.begin(), a.end());
        ll S = accumulate(a.begin(), a.end(), 0LL);
        // প্রয়োজনীয় অসন্তুষ্ট মানুষের মিনিমাম সংখ্যা
        ll need = n/2 + 1;
        // need-তম সবচেয়ে ক্ষুদ্র (0-বেইজ) মান
        ll b = a[need - 1];

        // পুরো গাছের নতুন গড়ের অর্ধেক > b হলে need জন অসন্তুষ্ট হবে:
        //   (S + x) / (2n) > b
        //   S + x > 2n * b
        //   x > 2n*b - S
        // ছোটতম পূর্ণসংখ্যা x = (2n*b - S) + 1
        ll required = 2 * n * b - S + 1;
        ll x = max(0LL, required);

        cout << x << "\n";
    }
    return 0;
}
