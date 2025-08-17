#include<bits/stdc++.h>
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
        ll n;
         cin >> n;
        vector<ll>a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0;
        for(int i = n-2; i >= 0; i--)
        {
            while(a[i] != 0 && a[i] >= a[i+1])
            {
                a[i] /= 2;
                ans++;
            }
            if(a[i] >= a[i+1] || (a[i] == 0 && i > 0))
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
}


/*#include<bits/stdc++.h>
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
        ll n;
        cin >> n;
        ll a[n + 2];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (is_sorted(a, a + n))
        {
            cout << 0 << endl;
            continue;
        }
        ll c = 0, f = 0;
        for (int i = n - 2; i >= 0; i--)
        {
                if (a[i + 1]==0)
                {
                    f = 1;
                    break;
                }
                while (a[i]>=a[i + 1])
                {
                    a[i] /= 2;
                    c++;
                }
        }
        if (f == 1)
            cout << -1 << endl;
        else
            cout << c << endl;
    }
    return 0;
}
*/
