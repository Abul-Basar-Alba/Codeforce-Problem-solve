// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     vector<int> freq(n + 2, 0);

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         if (a[i] <= n) {
//             freq[a[i]]++;
//         }
//     }

//     int M = 0;
//     while (freq[M] > 0) M++;

//     vector<int> unique_list;
//     for (int i = 0; i < M; i++) {
//         if (freq[i] == 1) {
//             unique_list.push_back(i);
//         }
//     }

//     int countU = unique_list.size();
//     ll sumU = 0;
//     for (int x : unique_list) sumU += x;

//     if (k == 0) {
//         ll s = accumulate(all(a), 0LL);
//         cout << s << '\n';
//     } 
//     else if (k == 1) {
//         ll s1 = 0;
//         for (int x : a) {
//             if (x < M && freq[x] == 1) {
//                 s1 += x;
//             } else {
//                 s1 += M;
//             }
//         }
//         cout << s1 << '\n';
//     } 
//     else {
//         if (countU == M) {
//             if (n == M) {
//                 cout << sumU << '\n';
//             } else {
//                 if (n - M == 1) {
//                     cout << sumU + M << '\n';
//                 } else {
//                     if (k % 2 == 0) {
//                         cout << sumU + (n - M) * (M + 1) << '\n';
//                     } else {
//                         cout << sumU + (n - M) * M << '\n';
//                     }
//                 }
//             }
//         } else {
//             int m1 = M;
//             for (int i = 0; i < M; i++) {
//                 if (freq[i] != 1) {
//                     m1 = i;
//                     break;
//                 }
//             }
//             ll sum_small = (m1 - 1LL) * m1 / 2;
//             if (k % 2 == 0) {
//                 cout << sum_small + m1 * (n - m1) << '\n';
//             } else {
//                 cout << sum_small + (m1 + 1) * (n - m1) << '\n';
//             }
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}