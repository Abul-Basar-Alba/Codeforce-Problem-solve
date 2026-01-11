#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if(!(cin >> T)) return 0;
   
    const int MAXP = 40;
    vector<ll> p3(MAXP+1, 1);
    for (int i = 1; i <= MAXP; ++i) {
        if (p3[i-1] > (ll)9e18 / 3) p3[i] = (ll)9e18; 
        else p3[i] = p3[i-1] * 3LL;
    }

    while (T--) {
        ll n, k;
        cin >> n >> k;


        if (k >= n) {
            cout << 3LL * n << '\n';
            continue;
        }

      
        ll tmp = n;
        ll min_deals = 0;
        while (tmp > 0) {
            min_deals += tmp % 3;
            tmp /= 3;
        }
        if (min_deals > k) {
            cout << -1 << '\n';
            continue;
        }

        ll d = min(n, k);
       
        if ((d % 2) != (n % 2)) --d;
        if (d < min_deals) {
       
            cout << -1 << '\n';
            continue;
        }

        ll merges_needed = (n - d) / 2; 
      
        vector<ll> cnt(MAXP+5, 0);
        cnt[0] = n;
        ll cost = 3LL * n; 

        for (int x = 0; x <= MAXP && merges_needed > 0; ++x) {
            ll available = cnt[x] / 3;
            if (available <= 0) continue;
            ll take = min(available, merges_needed);
            
            cost += take * p3[x];
            cnt[x] -= take * 3LL;
            cnt[x+1] += take;
            merges_needed -= take;
        }

        if (merges_needed > 0) {
         
            cout << -1 << '\n';
        } else {
            cout << cost << '\n';
        }
    }
    return 0;
}
