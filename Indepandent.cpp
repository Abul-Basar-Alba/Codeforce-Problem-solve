/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll mod=1000000007;
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
       ll ans=r-l+1;
       ll fact=1;
       for(int i=1;i<=ans;i++)
       {
           fact*=i;
           fact%=mod;
       }
       fact%=mod;
        map<char, int> cn;
        for (int j = l - 1; j < r;j++)
        {
            cn[s[j]]++;
        }

        for (auto& it: cn)
        {
            if (it.second > 1)
            {
                ll f=1;
                for(int i=1;i<=it.second;i++)
                {
                    f*=i;
                    f%=mod;
                }
                fact/=f;

            }
        }
        fact%=mod;
        cout<<(fact - 1 + mod) % mod<<endl;
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

const ll mod = 1000000007;

ll power(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) %mod;
        y = y >> 1;
        x = (x * x) %mod;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans = r - l + 1;
        ll fact = 1;
        for (ll i = 2; i <= ans; i++)
        {
            fact = (fact * i) % mod;
        }

        map<char, int> cn;
        for (int j = l - 1; j < r; j++)
        {
            cn[s[j]]++;
        }

        for (auto& it : cn)
        {
            ll f = 1;
            for (ll i = 2; i <= it.second; i++)
            {
                f = (f * i) % mod;
                f%=mod;
            }
            fact = (fact * power(f, mod - 2)) % mod;
        }

        cout << (fact - 1 + mod) % mod << endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

const ll mod = 1000000007;
const int MAXN = 100005;

ll fact[MAXN];
ll invfact[MAXN];

ll power(ll x, ll y) {
    ll res = 1;
    x = x % mod;
    while (y > 0) {
        if (y & 1)
            res = (res * x) %mod;
        y = y >> 1;
        x = (x * x) %mod;
    }
    return res;
}

void precalculate() {
    fact[0] = 1;
    invfact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i-1] * i) % mod;
        invfact[i] = power(fact[i], mod - 2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precalculate();

    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        ll l, r;
        cin >> l >> r;

        ll ans = r - l + 1;
        ll fact_val = fact[ans];

        map<char, int> cn;
        for (int j = l - 1; j < r; j++) {
            cn[s[j]]++;
        }

        for (auto& it : cn) {
            fact_val = (fact_val * invfact[it.second]) % mod;
        }

        cout << (fact_val - 1 + mod) % mod << endl;
    }

    return 0;
}
