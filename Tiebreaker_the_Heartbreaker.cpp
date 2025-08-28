#include <bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll cntx = 0, cnty = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == '1')
                    cntx++;
            }
            else
            {
                if (s[i] == '1')
                    cnty++;
            }
        }
        if (cntx > cnty)
            cout << 0 << endl;
        else if (cnty > cntx)
            cout << 1 << endl;
        else
        {
                cout << -1 << endl;
        }
    }
}
