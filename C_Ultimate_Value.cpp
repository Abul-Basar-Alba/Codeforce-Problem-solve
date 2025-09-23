#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        
        ll base = 0;
        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0) 
                base += a[i];
            else 
                base -= a[i];
        }
        
        vector<int> even, odd;
        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0) 
                even.push_back(i);
            else 
                odd.push_back(i);
        }
        
        ll best_net = 0;
        
        // Case A: i in odds, j in evens
        if (!even.empty() && !odd.empty()) 
        {
            vector<ll> G1, G2;
            for (int j : even) 
            {
                G1.push_back(j + 2 * a[j]);
                G2.push_back(j - 2 * a[j]);
            }
            ll m = even.size();
            vector<ll> minG1(m), maxG2(m);
            minG1[0] = G1[0];
            for (int i = 1; i < m; i++) 
            {
                minG1[i] = min(minG1[i-1], G1[i]);
            }
            maxG2[m-1] = G2[m-1];
            for (int i = m-2; i >= 0; i--) 
            {
                maxG2[i] = max(maxG2[i+1], G2[i]);
            }

            for (int i : odd) 
            {
                auto it = upper_bound(even.begin(), even.end(), i);
                if (it != even.begin()) 
                {
                    it--;
                    int idx = it - even.begin();
                    ll candidate = (i + 2 * a[i]) - minG1[idx];
                    if (candidate > best_net) best_net = candidate;
                }
                it = lower_bound(even.begin(), even.end(), i);
                if (it != even.end()) 
                {
                    int idx = it - even.begin();
                    ll candidate = (2 * a[i] - i) + maxG2[idx];
                    if (candidate > best_net) best_net = candidate;
                }
            }
        }
        
        // Case B: i in evens, j in odds
        if (!even.empty() && !odd.empty()) 
        {
            vector<ll> K1, K2;
            for (int j : odd) 
            {
                K1.push_back(j - 2 * a[j]);
                K2.push_back(j + 2 * a[j]);
            }
            ll m = odd.size();
            vector<ll> minK1(m), maxK2(m);
            minK1[0] = K1[0];
            for (int i = 1; i < m; i++) 
            {
                minK1[i] = min(minK1[i-1], K1[i]);
            }
            maxK2[m-1] = K2[m-1];
            for (int i = m-2; i >= 0; i--) 
            {
                maxK2[i] = max(maxK2[i+1], K2[i]);
            }

            for (int i : even) 
            {
                auto it = upper_bound(odd.begin(), odd.end(), i);
                if (it != odd.begin()) 
                {
                    it--;
                    int idx = it - odd.begin();
                    ll candidate = (i - 2 * a[i]) - minK1[idx];
                    if (candidate > best_net) best_net = candidate;
                }
                it = lower_bound(odd.begin(), odd.end(), i);
                if (it != odd.end()) 
                {
                    int idx = it - odd.begin();
                    ll candidate = (-i - 2 * a[i]) + maxK2[idx];
                    if (candidate > best_net) 
                    {
                        best_net = candidate;
                    }
                }
            }
        }
        
        ll same_parity_cost = 0;
        if (even.size() >= 2) 
        {
            same_parity_cost = max(same_parity_cost, (ll)even.back() - even.front());
        }
        if (odd.size() >= 2) 
        {
            same_parity_cost = max(same_parity_cost, (ll)odd.back() - odd.front());
        }
        
        ll ans = base + max(best_net, same_parity_cost);
        cout << ans << '\n';
    }
    return 0;
}