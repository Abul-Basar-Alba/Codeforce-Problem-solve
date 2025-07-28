#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
 
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend()); 

        ll ans = n;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=c)
            {
                ans--;
                c/=2;
            }
        }

        
        cout << ans << '\n';
    }
}
