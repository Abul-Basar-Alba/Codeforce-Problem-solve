#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, rk, ck, rd, cd;
        cin >> n >> rk >> ck >> rd >> cd;

        ll lo = 0, hi = n, ans = -1;
        while(lo <= hi)
        {
            ll mid = (lo + hi) >> 1;

            ll RK_lo = max<ll>(0, rk - mid);
            ll RK_hi = min<ll>(n, rk + mid);
            ll RD_lo = max<ll>(0, rd - mid);
            ll RD_hi = min<ll>(n, rd + mid);

            ll CK_lo = max<ll>(0, ck - mid);
            ll CK_hi = min<ll>(n, ck + mid);
            ll CD_lo = max<ll>(0, cd - mid);
            ll CD_hi = min<ll>(n, cd + mid);

            bool rows_ok = (RK_lo >= RD_lo) && (RK_hi <= RD_hi);
            bool cols_ok = (CK_lo >= CD_lo) && (CK_hi <= CD_hi);

            if(rows_ok && cols_ok)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }   
        }

        if(ans == -1) 
            cout << -1 << '\n';
        else 
            cout << ans << '\n';
    }
    return 0;
}
