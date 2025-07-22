/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

const ll mod = 1000000007; // 10^9 + 7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        ll mx = INT_MIN;
        ll sum=0;
        ll cus = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
            cus += a[i];
            mx = max(mx, cus);
            if (cus < 0) cus = 0;
        }
        //m=((m-mx)%mod+mod)%mod;
	//mx%=mod;
	//cout<<(m%mod+((powermod(2,k,mod)%mod*mx%mod)%mod)%mod)%mod<<endl;
        sum=((sum-mx)%mod+mod)%mod;
        ll pow= 1;
        for (int i = 0; i < k; i++)
        {
            pow=(pow*2)%mod;
        }
        pow%=mod;
        mx%=mod;
        ll ans = (((pow%mod*mx%mod)%mod)%mod+sum%mod)%mod;
        cout << ans << endl;
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

const ll mod = 1e9 + 7;

ll powermod(ll x, ll y, ll p)// reduce time complexity determine the power of 2
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll ans = 0, sum = 0, m = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            m += v[i];
            sum += v[i];
            if (sum < 0)
                sum = 0;
            ans = max(ans, sum);// Maximum sub array kadane's algorithm
        }
        m = ((m - ans) % mod + mod) % mod;//concept of modular arithmetic
        ans %= mod;
        cout << (m + ((powermod(2, k, mod) * ans) % mod) % mod) % mod << endl;
    }
    return 0;
}
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3));

        if (hour >= 12) {
            if (hour > 12)
                hour -= 12;
            if (hour < 10)
                cout << "0";
            cout << hour << ":";

            if (minute < 10)
                cout << "0";
            cout << minute << " PM";
        } else {
            if (hour == 0)
                hour = 12;
            if (hour < 10)
                cout << "0";
            cout << hour << ":";

            if (minute < 10)
                cout << "0";
            cout << minute << " AM";
        }
        cout << endl;
    }

    return 0;
}
