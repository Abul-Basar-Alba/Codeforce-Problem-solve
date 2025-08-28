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
        ll l, r;
        cin >> l >> r;
        ll c = 0;
        for (int i = 1; ; i++)
        {
            ll x=pow(2,i);
            if (x > r)
            {
                c = i - 1;
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}
