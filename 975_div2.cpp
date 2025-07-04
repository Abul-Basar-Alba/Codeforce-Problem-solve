// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long int;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         ll e=0,odd=0;
//         ll mx1=0,mx2=0;
//         ll mx=0;
//         for (ll i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//             if(i% 2 == 0)
//             {
//                 mx1=max(mx1,a[i]);
//                 e++;
//             }
//             else
//             {
//                 mx2=max(mx2,a[i]);
//                 odd++;
//             }
//         }
//         mx=max(mx1+e,mx2+odd);
//         cout << mx << "\n";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<ll> x(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }
        vector<ll> queries(q);
        for(int i = 0; i < q; i++){
            cin >> queries[i];
        }

        // 1) segments-এর শুরু ও শেষের event তৈরি
        // start at x[i]: + (n-i-1)
        // end   at x[j]+1: - (j)
        vector<pair<ll,ll>> events;
        events.reserve(2*n);
        for(int i = 0; i < n; i++){
            ll startCount = (ll)(n - i - 1);
            if(startCount > 0)
                events.emplace_back(x[i], +startCount);
            // end events: for this point acting as j
            ll endCount = (ll)i;  // number of i'<i
            if(endCount > 0)
                events.emplace_back(x[i] + 1, -endCount);
        }

        // 2) event-সমূহকে coordinate অনুসারে sort
        sort(events.begin(), events.end());

        // 3) sweep-line: coverage C, আগে previous position prevX
        ll C = 0;
        ll prevX = events[0].first;
        map<ll,ll> freq;  // freq[C] = total #points with coverage C

        for(auto &ev : events){
            ll pos = ev.first;
            ll delta = ev.second;

            if(pos > prevX){
                ll length = pos - prevX;
                if(C > 0) {
                    // prevX ... pos-1 তে coverage = C
                    freq[C] += length;
                }
                prevX = pos;
            }
            C += delta;
        }

        // 4) প্রতিটি query-এর উত্তর
        // যদি কোনো coverage level কখনো না পাওয়া যায় → 0
        for(int i = 0; i < q; i++){
            ll k = queries[i];
            auto it = freq.find(k);
            ll ans = (it == freq.end() ? 0LL : it->second);
            cout << ans << (i+1<q ? ' ' : '\n');
        }
    }

    return 0;
}
