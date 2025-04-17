#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) 
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }

        ll tem = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= k)
            {
                tem += a[i];
            }
            else if(a[i] == 0 && tem > 0)
            {
                ans++;
                tem--; 
            }
        }
        cout << ans << "\n";
    }   
    return 0;
}
