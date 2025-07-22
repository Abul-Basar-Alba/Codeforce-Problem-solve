

#include <bits/stdc++.h>
#define ll ll int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        
        ll sz=n*m;
        vector<ll> a(sz);
        for (int i = 0; i < sz; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll min_val = a[0];
        ll sec_min_val = a[1];
        ll sec_val = a[sz-2];
        ll max_val = a[sz-1];

        ll option1 = (max_val - min_val) * (sz - m) + (max_val - sec_min_val) * (m-1);
        ll option2 = (max_val - min_val) * (sz - m) + (sec_val - min_val) * (m-1);
        
        ll option3 = (max_val - min_val) * (sz - n) + (max_val - sec_min_val) * (n-1);
        ll option4 = (max_val - min_val) * (sz - n) + (sec_val - min_val) * (n-1);

        ll ans = max({option1, option2, option3, option4});
        cout << ans << '\n';
    }
    return 0;
}