#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    bool ok1 = false, ok2 = false;

    
    if (a >= b)
    {
        ll x = 2;
        for (int i = 0; i < b; i++)
        {
            x += 2;
        }
        if (a <= x) ok1 = true;
    }
    else
    {
        ll x = 2;
        for (int i = 0; i < a; i++)
        {
            x += 2;
        }
        if (b <= x) ok1 = true;
    }

    ll ra = c - a; 
    ll rb = d - b; 

    if (ra >= rb)
    {
        ll x = 2;
        for (int i = 0; i < rb; i++)
        {
            x += 2;
        }
        if (ra <= x) ok2 = true;
    }
    else
    {
        ll x = 2;
        for (int i = 0; i < ra; i++)
        {
            x += 2;
        }
        if (rb <= x) ok2 = true;
    }

    if (ok1 && ok2) 
    cout << "YES\n";
    else 
    cout << "NO\n";
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
