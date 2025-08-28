/*#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        ll x = 0, res = 0, f = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                x++;
                f = 1;
            }
            else if (s[i] == '0' && f == 1)
            {
                res += (x + 1);
            }
        }

        cout << res << endl;
    }

    return 0;
}
*/
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
        string s;
        cin >> s;

        ll res = 0,n= 0;

        for (char c : s)
        {
            if (c == '1')
            {
                n++;
            }
           else if (c == '0' && n > 0)
            {
                res += n + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}

