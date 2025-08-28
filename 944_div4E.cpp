/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(k),b(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        vector<ll>v;
        while(q--)
        {
            ll d;
            cin>>d;
            if(d==0)
            {
                v.push_back(0);
                continue;
            }
             if(d==n)
             {
                v.push_back(b[k-1]);
                continue;
             }
           auto it = upper_bound(a.begin(), a.end(), d);
            ll ind = it - a.begin();
            if(ind==0)
            {
                ll x=d*b[0]/a[0];
                v.push_back(x);
            }
            else
            {
              ll a1=a[ind-1],a2=a[ind];
              ll b1=b[ind-1],b2=b[ind];

              ll x=b1+((d-a1)*(b2-b1)/(a2-a1));
              v.push_back(x);
            }
        }
           for(auto res:v)
            {
                cout<<res<<' ';
            }
            cout<<endl;
    }
}
*/



/*#include <bits/stdc++.h>
using namespace std;
#define ll ll

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(k), b(k);
        for (int i = 0; i < k;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k;i++)
        {
            cin >> b[i];
        }

        vector<ll> v;
        while(q--)
        {
            ll d;
            cin >> d;

            if (d == 0)
            {
                v.push_back(0);
                continue;
            }

            if (d == n)
            {
                v.push_back(b[k-1]);
                continue;
            }
            auto it = upper_bound(a.begin(), a.end(), d);
            ll ind = it - a.begin();

            if (ind == 0)
            {
                ll x= b[0] * d / a[0];
                v.push_back(x);
            }
            else
            {
                ll a1 = a[ind - 1], a2 = a[ind];
                ll b1 = b[ind - 1], b2 = b[ind];
                ll x= b1 + (d - a1) * (b2 - b1) / (a2 - a1);
                v.push_back(x);
            }
        }

        for (const auto& res : v)
        {
            cout << res << ' ';
        }
        cout << '\n';
    }

    return 0;
}
*/


/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        set<ll> s;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        map<ll, ll> mp;
        for(auto c : a)
        {
            mp[c]++;
        }

        ll mx = 0;
        for(auto it : mp)
        {
            if(it.second > mx)
                mx = it.second;
        }

        ll res = n - mx;
        cout << res << endl;
    }

    return 0;
}
*/

/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll mod=10e9+7;
        ll fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=(fact*i)%mod;
        }
        fact%=mod;
        cout<<fact<<endl;
    }
}*/

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

#define MOD 1000000007
#define MAXN 100000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> fact(MAXN + 1), inv_fact(MAXN + 1);
    fact[0] = 1;
    for (int i = 1; i <= MAXN;i++)
        fact[i] = fact[i - 1] * i % MOD;

    inv_fact[MAXN] = 1;
    for (int i = MAXN - 1; i >= 0; --i)
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> freq(26, 0);
        for (char c : s)
            freq[c - 'a']++;

        ll result = 1;
        for (int f : freq)
        {
            if (f > 0)
                result = result * (f + 1) % MOD;
        }

        cout << (result - 1 + MOD) % MOD << '\n';
    }

    return 0;
}
