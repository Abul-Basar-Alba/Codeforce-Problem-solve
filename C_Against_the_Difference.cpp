// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     for(ll i=0;i<n;i++) 
//     cin >> a[i];

//     map<ll, vector<ll>> pos;
//     pos.reserve(n*2);
//     for(ll i=0;i<n;i++) 
//     pos[a[i]].push_back(i);

//     struct Interval { ll start, end, w; };
//     vector<Interval> intervals;
//     intervals.reserve(n); 
//     for (auto &it : pos) 
//     {
//         ll val = it.first;
//         auto &vec = it.second;
//         ll m = vec.size();
//         if (val > m) 
//         continue; 
//         for (ll s = 0; s + val - 1 < m; ++s) 
//         {
//             ll st = vec[s];
//             ll en = vec[s + val - 1];
//             intervals.push_back({st, en, val});
//         }
//     }

//     if (intervals.empty()) 
//     {
//         cout << 0 << "\n";
//         return;
//     }

//     sort(intervals.begin(), intervals.end(), [](const Interval &A, const Interval &B)
//     {
//         if (A.end != B.end) 
//         return A.end < B.end;
//         return 
//         A.start < B.start;
//     });

//     vector<ll> ends;
//     ends.reserve(intervals.size());
//     for (auto &it : intervals) ends.push_back(it.end);

//     vector<ll> dp(intervals.size(), 0);

//     for (size_t i = 0; i < intervals.size(); ++i) 
//     {
//         ll take = intervals[i].w;
       
//         ll st = intervals[i].start;
    
//         auto it = upper_bound(ends.begin(), ends.begin() + i, st - 1);
//         ll p = -1;
//         if (it != ends.begin()) 
//         {
//             --it;
//             p = (ll)(it - ends.begin());
//         }
//         ll with_take = take + (p == -1 ? 0 : dp[p]);
//         ll without_take = (i == 0 ? 0 : dp[i-1]);
//         dp[i] = max(with_take, without_take);
//     }

//     cout << dp.back() << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(n + 1, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n) {
            cnt[a[i]]++;
        }
    }
    
    vector<int> dp(n + 1, 0);
    for (int i = n; i >= 1; i--) {
        dp[i] = cnt[i];
        for (int j = 2 * i; j <= n; j += i) {
            dp[i] = max(dp[i], dp[j] + cnt[i]);
        }
    }
    
    cout << *max_element(dp.begin(), dp.end()) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}