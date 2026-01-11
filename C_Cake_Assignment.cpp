#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll k, x;
    cin >> k >> x;
    
    ll n = 1LL << k;   
    ll sum = 2*n;     

    if (x == n)
    {
        cout << 0 << "\n\n";
        return;
    }

    vector<ll> v;
    ll cur = x;

    while (cur != n)
    {
        if (cur < n)
        {
           v.push_back(1);       
            cur = cur * 2LL;          
        }
        else
        {
            v.push_back(2);       
            cur = cur * 2LL - sum;       
        }
    }

    reverse(all(v));

    cout << v.size() << "\n";
    if (!v.empty())
    {
        for (ll i = 0; i < v.size(); i++)
        {
            if (i) 
            cout << " ";
            cout << v[i];
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
